#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <stdio.h>
#include "display_custom.h"
#include "lvgl_utils.h"
#include "gpio_adc.h"
#include <zephyr/net/lwm2m.h>


LOG_MODULE_REGISTER(sensortest, LOG_LEVEL_INF);

static double analog_sensor_value = 0.0;
static int32_t digital_sensor_value = 0;

static void *read_analog_cb(uint16_t obj_inst_id, uint16_t res_id, uint16_t res_inst_id, size_t *data_len)
{
    *data_len = sizeof(double);
    return &analog_sensor_value;
}

static void *read_digital_cb(uint16_t obj_inst_id, uint16_t res_id, uint16_t res_inst_id, size_t *data_len)
{
    *data_len = sizeof(int32_t);
    return &digital_sensor_value;
}

static int init_lwm2m_resources(void)
{
    int err;

    // Generic sensor object for analog value
    err = lwm2m_engine_create_obj_inst("3300/0");
    if (err) {
        LOG_ERR("Failed to create generic sensor object: %d", err);
        return err;
    }

    err = lwm2m_engine_register_read_callback("3300/0/5700", read_analog_cb);
    if (err) {
        LOG_ERR("Failed to register analog read callback: %d", err);
        return err;
    }

    // Humidity sensor object for digital value
    err = lwm2m_engine_create_obj_inst("3304/0");
    if (err) {
        LOG_ERR("Failed to create humidity sensor object: %d", err);
        return err;
    }

    err = lwm2m_engine_register_read_callback("3304/0/5700", read_digital_cb);
    if (err) {
        LOG_ERR("Failed to register digital read callback: %d", err);
        return err;
    }

    return 0;
}

int main(void)
{
    int32_t adc_value;
    char display_text[64];

    if (init_display() < 0) {
        return -1;
    }

    init_lvgl();

    lv_obj_t *label = create_label("Initializing...");

    lv_task_handler();
    lv_refr_now(NULL); 

    if (init_gpio() < 0 || init_adc() < 0) {
        return -1;
    }

    if (init_lwm2m_resources() < 0) {
        LOG_ERR("Failed to initialize LwM2M resources");
        return -1;
    }

    int err = lwm2m_init();
    if (err) {
        LOG_ERR("Failed to initialize LwM2M: %d", err);
        return -1;
    }

    k_sleep(K_SECONDS(5));

    show_logo();
    lv_task_handler();

    while (1) {
        int digital_val = read_gpio();
        adc_value = read_adc();

        if (adc_value >= 0) {
            snprintf(display_text, sizeof(display_text),
                     "Digital: %s\nAnalog: %d mV",
                     digital_val == 0 ? "Moist" : "Dry",
                     adc_value);
            update_label(label, display_text);

            // Aktualisieren Sie die LwM2M-Sensorwerte
            analog_sensor_value = (double)adc_value;
            lwm2m_engine_set_float("3300/0/5700", &analog_sensor_value);

            digital_sensor_value = digital_val == 0 ? 100 : 0; // 100% für feucht, 0% für trocken
            lwm2m_engine_set_int32("3304/0/5700", digital_sensor_value);

            // Führen Sie LwM2M-Aufgaben aus
            lwm2m_engine_step();

            lv_task_handler();
            lv_refr_now(NULL); 
        } else {
            LOG_ERR("Error reading sensor values");
        }

        k_sleep(K_SECONDS(5));
    }

    return 0;
}
