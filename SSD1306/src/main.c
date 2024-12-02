#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/display.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/adc.h>
#include <zephyr/logging/log.h>
#include <lvgl.h>
#include <stdio.h>

LOG_MODULE_REGISTER(sensortest, LOG_LEVEL_INF);

#define SOIL_MOISTURE_GPIO_NODE DT_NODELABEL(soil_moisture_gpio)
#define SOIL_MOISTURE_ADC_NODE DT_NODELABEL(soil_moisture_adc)
#define ADC_RESOLUTION 12
#define ADC_CHANNEL DT_IO_CHANNELS_INPUT(SOIL_MOISTURE_ADC_NODE)

static const struct gpio_dt_spec soil_moisture_gpio = GPIO_DT_SPEC_GET(SOIL_MOISTURE_GPIO_NODE, gpios);
static const struct adc_dt_spec soil_moisture_adc = ADC_DT_SPEC_GET(SOIL_MOISTURE_ADC_NODE);
static const struct device *display_dev;

static int16_t sample_buffer[1];

struct adc_sequence sequence = {
    .buffer = sample_buffer,
    .buffer_size = sizeof(sample_buffer),
};

static int init_display(void) {
    display_dev = DEVICE_DT_GET(DT_CHOSEN(zephyr_display));
    if (!device_is_ready(display_dev)) {
        LOG_ERR("Display not ready");
        return -1;
    }
    display_blanking_off(display_dev);
    return 0;
}

static void init_lvgl(void) {
    lv_init();
    lv_task_handler();
}

int main(void)
{
    int ret;
    int32_t adc_value;
    char display_text[64];

    if (init_display() < 0) {
        return -1;
    }

    init_lvgl();

    // Hier Widgets erstellen und Logik implementieren
    lv_obj_clean(lv_scr_act());
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    // GPIO Konfiguration
    if (!device_is_ready(soil_moisture_gpio.port)) {
        LOG_ERR("Error: Soil moisture GPIO device is not ready");
        return -1;
    }

    ret = gpio_pin_configure_dt(&soil_moisture_gpio, GPIO_INPUT);
    if (ret != 0) {
        LOG_ERR("Error: failed to configure GPIO");
        return -1;
    }

    // ADC Konfiguration
    if (!device_is_ready(soil_moisture_adc.dev)) {
        LOG_ERR("Error: ADC device is not ready");
        return -1;
    }

    ret = adc_channel_setup_dt(&soil_moisture_adc);
    if (ret != 0) {
        LOG_ERR("Error: failed to setup ADC channel, error code: %d", ret);
        return ret;
    }

    while (1) {
        lv_task_handler();
        // Digitalen Wert lesen
        int digital_val = gpio_pin_get_dt(&soil_moisture_gpio);
        
        // Analogen Wert lesen
        ret = adc_sequence_init_dt(&soil_moisture_adc, &sequence);
        if (ret != 0) {
            LOG_ERR("Error: failed to initialize ADC sequence");
            continue;
        }

        ret = adc_read(soil_moisture_adc.dev, &sequence);
        if (ret == 0) {
            int32_t adc_value = sample_buffer[0];
            int32_t millivolts = 0;
            ret = adc_raw_to_millivolts_dt(&soil_moisture_adc, &millivolts);
            if (ret != 0) {
                LOG_ERR("Error: failed to convert ADC raw value to millivolts");
            } else {
                LOG_INF("Digital: %s, Analog raw: %d, Analog: %d mV", 
                    digital_val == 0 ? "Moist" : "Dry", 
                    adc_value,
                    millivolts);
                int32_t reference_mv = adc_ref_internal(soil_moisture_adc.dev);
                int32_t millivolts = (adc_value * reference_mv) / (1 << soil_moisture_adc.resolution);
                LOG_INF("Manual conversion: %d mV", millivolts);
                snprintf(display_text, sizeof(display_text), 
                    "Digital: %s\nAnalog: %d mV", 
                    digital_val == 0 ? "Moist" : "Dry", 
                    millivolts);
                lv_label_set_text(label, display_text);
            }
        } else {
            LOG_ERR("Error reading ADC");
        }

        k_sleep(K_SECONDS(5));
    }

    return 0;
}