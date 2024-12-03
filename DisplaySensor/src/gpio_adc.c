#include "gpio_adc.h"
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/adc.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(gpio_adc, LOG_LEVEL_INF);

static const struct gpio_dt_spec soil_moisture_gpio = GPIO_DT_SPEC_GET(DT_NODELABEL(soil_moisture_gpio), gpios);
static const struct adc_dt_spec soil_moisture_adc = ADC_DT_SPEC_GET(DT_NODELABEL(soil_moisture_adc));
static int16_t sample_buffer[1];

struct adc_sequence sequence = {
    .buffer = sample_buffer,
    .buffer_size = sizeof(sample_buffer),
};

int init_gpio(void) {
    if (!device_is_ready(soil_moisture_gpio.port)) {
        LOG_ERR("Error: Soil moisture GPIO device is not ready");
        return !device_is_ready(soil_moisture_gpio.port);
    }

    int ret = gpio_pin_configure_dt(&soil_moisture_gpio, GPIO_INPUT);
    if (ret != 0) {
        LOG_ERR("Error: failed to configure GPIO");
        return ret;
    }

    return 0;
}

int read_gpio(void) {
    return gpio_pin_get_dt(&soil_moisture_gpio);
}

int init_adc(void) {
    if (!adc_is_ready_dt(&soil_moisture_adc)) {
        LOG_ERR("Error: ADC device is not ready");
        return !adc_is_ready_dt(&soil_moisture_adc);
    }

    LOG_INF("ADC Device: %s", soil_moisture_adc.dev->name);
    LOG_INF("Channel ID: %d", soil_moisture_adc.channel_id);
    LOG_INF("Resolution: %d", soil_moisture_adc.resolution);
    LOG_INF("Oversampling: %d", soil_moisture_adc.oversampling);
    LOG_INF("Vref (mV): %d", soil_moisture_adc.vref_mv);

    int ret = adc_channel_setup_dt(&soil_moisture_adc);
    if (ret != 0) {
        LOG_ERR("Error: failed to setup ADC channel, error code: %d", ret);
        return ret;
    }

    return 0;
}

int32_t read_adc(void) {
    int ret = adc_sequence_init_dt(&soil_moisture_adc, &sequence);
    if (ret != 0) {
        LOG_ERR("Error: failed to initialize ADC sequence");
        return -1;
    }

    ret = adc_read(soil_moisture_adc.dev, &sequence);
    if (ret != 0) {
        LOG_ERR("Error reading ADC");
        return -1;
    }

    int32_t adc_value = sample_buffer[0];
    int32_t millivolts = 0;

    ret = adc_raw_to_millivolts(600, ADC_GAIN_1_6, 12, &millivolts);
    if (ret == 0) {
        LOG_INF("Converted value: %d mV", millivolts);
    } else {
        LOG_ERR("Conversion failed with error: %d", ret);
    }

    int32_t reference_mv = adc_ref_internal(soil_moisture_adc.dev);
    int32_t millivolts_man = (adc_value * reference_mv) / (1 << soil_moisture_adc.resolution);

    LOG_INF("Analog raw: %d, Converted: %d mV (Manual conversion: %d mV)",
        adc_value, millivolts, millivolts_man);

    int32_t reference_miv = 600; // Interne Referenzspannung (0,6V) in mV
    int32_t gain_factor = 6;    // Für ADC_GAIN_1_6 (anpassen, falls geändert)
    int32_t millivolts_manual = (adc_value * reference_miv * gain_factor) / (1 << soil_moisture_adc.resolution);
    LOG_INF("Manually calculated voltage: %d mV", millivolts_manual);

    LOG_INF("INTERNE: %d", adc_ref_internal(soil_moisture_adc.dev));

    return millivolts_manual;
}

