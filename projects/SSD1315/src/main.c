#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>
#include <string.h>

// Imports für Display
#include "i2c_scanner.h"
#include "ssd1315.h"
#include "i2c_helper.h"

#include "hbrslogo.h"

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

void init_display(void) {
    LOG_INF("Initializing SSD1315");
    if (SSD1315_RegisterBusIO(&ssd1315_obj, &ssd1315_io) != SSD1315_OK) {
        LOG_ERR("Failed to register SSD1315 IO");
        return;
    }
    if (SSD1315_Init(&ssd1315_obj, SSD1315_FORMAT_DEFAULT, SSD1315_ORIENTATION_LANDSCAPE) != SSD1315_OK) {
        LOG_ERR("Failed to initialize SSD1315");
        return;
    }
    LOG_INF("SSD1315 initialized successfully");
}



int main(void) {
    LOG_INF("Starting SSD1315 application");
    i2c_scan();
    init_display();

    SSD1315_DisplayOn(&ssd1315_obj);

    LOG_INF("Chess Pattern");
    SSD1315_Clear(&ssd1315_obj, SSD1315_COLOR_BLACK);
    for (uint32_t y = 0; y < 64; y += 8) {
        for (uint32_t x = 0; x < 128; x += 8) {
            SSD1315_FillRect(&ssd1315_obj, x, y, 8, 8, (x + y) % 16 == 0 ? SSD1315_COLOR_WHITE : SSD1315_COLOR_BLACK);
        }
    }
    SSD1315_Refresh(&ssd1315_obj);
    k_sleep(K_SECONDS(2));

    LOG_INF("Random Pattern");
    SSD1315_Clear(&ssd1315_obj, SSD1315_COLOR_BLACK);
    for (uint32_t y = 0; y < SSD1315_LCD_PIXEL_HEIGHT; y++) {
        for (uint32_t x = 0; x < SSD1315_LCD_PIXEL_WIDTH; x++) {
            SSD1315_SetPixel(&ssd1315_obj, x, y, (x + y) % 4 ? SSD1315_COLOR_WHITE : SSD1315_COLOR_BLACK);
        }
    }
    SSD1315_Refresh(&ssd1315_obj);
    k_sleep(K_SECONDS(3));

    LOG_INF("HBRS Logo");
    SSD1315_Clear(&ssd1315_obj, SSD1315_COLOR_BLACK);
    SSD1315_DrawBitmap(&ssd1315_obj, 0, 0, hbrslogo_bits);
    SSD1315_Refresh(&ssd1315_obj);

    while (1) {
        k_sleep(K_SECONDS(1));
    }

    return 0;
}