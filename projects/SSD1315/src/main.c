#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>
#include <string.h>

// Imports für Display
#include "i2c_scanner.h"
#include "ssd1315.h"
#include "i2c_helper.h"

#include "draw.h"

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2));

// SSD1315-Objekt und IO-Struktur
SSD1315_Object_t ssd1315_obj;
SSD1315_IO_t ssd1315_io = {
    .Init = I2C_Init,
    .DeInit = I2C_DeInit,
    .WriteReg = I2C_WriteReg,
    .ReadReg = I2C_ReadReg,
    .GetTick = (int32_t (*)(void))k_uptime_get_32 // Zephyr-Zeitfunktion
};

int init_display(void) {
    LOG_INF("Initializing SSD1315");
    if (SSD1315_RegisterBusIO(&ssd1315_obj, &ssd1315_io) != SSD1315_OK) {
        LOG_ERR("Failed to register SSD1315 IO");
        return -1;
    }
    if (SSD1315_Init(&ssd1315_obj, SSD1315_FORMAT_DEFAULT, SSD1315_ORIENTATION_LANDSCAPE) != SSD1315_OK) {
        LOG_ERR("Failed to initialize SSD1315");
        return -1;
    }
    LOG_INF("SSD1315 initialized successfully");
    return 0;
}



int main(void) {
    LOG_INF("Starting SSD1315 application");
    i2c_scan();
    init_display();

    SSD1315_DisplayOn(&ssd1315_obj);

    draw_chess_pattern(&ssd1315_obj);
    k_sleep(K_SECONDS(2));

    draw_random_pattern(&ssd1315_obj);
    k_sleep(K_SECONDS(3));

    draw_hbrs_logo(&ssd1315_obj);

    while (1) {
        k_sleep(K_SECONDS(1));
    }

    return 0;
}