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
    if (!device_is_ready(soil_moisture_adc.dev)) {
        LOG_ERR("Error: ADC device is not ready");
        return !device_is_ready(soil_moisture_adc.dev);
    }

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

    ret = adc_raw_to_millivolts_dt(&soil_moisture_adc, &millivolts);
    if (ret != 0) {
        LOG_ERR("Error converting ADC raw value to millivolts");
        return -1;
    }

    int32_t reference_mv = adc_ref_internal(soil_moisture_adc.dev);
    int32_t millivolts_man = (adc_value * reference_mv) / (1 << soil_moisture_adc.resolution);

    LOG_INF("Analog raw: %d, Converted: %d mV (Manual conversion: %d mV)",
        adc_value, millivolts, millivolts_man);

    return adc_value;
}

