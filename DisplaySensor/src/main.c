#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <stdio.h>
#include "display_custom.h"
#include "lvgl_utils.h"
#include "gpio_adc.h"


LOG_MODULE_REGISTER(sensortest, LOG_LEVEL_INF);

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

            lv_task_handler();
            lv_refr_now(NULL); 
        } else {
            LOG_ERR("Error reading sensor values");
        }

        k_sleep(K_SECONDS(5));
    }

    return 0;
}
