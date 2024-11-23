#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/display.h>
#include <zephyr/logging/log.h>
#include "i2c_scanner.h"

LOG_MODULE_REGISTER(ssd1315_display, LOG_LEVEL_INF);

// Bitmap für "Hello World"
static const uint8_t hello_world_bitmap[] = {
    0x7E, 0x81, 0x95, 0x81, 0x95, 0x81, 0x7E, 0x00, // H
    0x00, 0x00, 0x00, 0x7F, 0x40, 0x40, 0x40, 0x00, // E
    0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, // L
    0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, // L
    0x3C, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3C, 0x00, // O
    0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, // SPACE
    0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3C, 0x00, // W
    0x3C, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3C, 0x00, // O
    0x7F, 0x81, 0x91, 0x91, 0x91, 0x91, 0x61, 0x00, // R
    0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, // L
    0x7F, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x00  // D
};

// Globales Array für den Display-Puffer
static uint8_t buf[128 * 8] = {0}; // Platz für eine Zeile mit 128 Pixel Breite

// Puffer für ein leeres Display (alle Pixel aus)
static uint8_t clear_buf[128 * 64 / 8] = {0}; // Für ein 128x64-Display

void clear_display(const struct device *display_dev) {
    struct display_buffer_descriptor desc = {
        .buf_size = sizeof(clear_buf),
        .width = 128, // Breite des Displays
        .height = 64, // Höhe des Displays
        .pitch = 128  // Breite in Pixeln
    };

    // Schreibe den leeren Puffer auf das gesamte Display
    int ret = display_write(display_dev, 0, 0, &desc, clear_buf);
    if (ret < 0) {
        LOG_ERR("Failed to clear display (error %d)", ret);
    } else {
        LOG_INF("Display cleared");
    }
}

int main(void) {
    // I2C-Scanner aufrufen
    i2c_scan();

    // Display-Gerät initialisieren
    const struct device *display_dev = DEVICE_DT_GET(DT_NODELABEL(ssd1315));

    if (!device_is_ready(display_dev)) {
        LOG_ERR("Display device not ready");
        return -1;
    }

    LOG_INF("Display device is ready");

    // Display einschalten und Helligkeit setzen
    display_blanking_off(display_dev);
    LOG_INF("Display turned on");
    clear_display(display_dev);
    display_set_contrast(display_dev, 0xFF); // Maximale Helligkeit
    LOG_INF("Display contrast set");

    // Kopiere die Bitmap in den Puffer
    memcpy(buf, hello_world_bitmap, sizeof(hello_world_bitmap));

    // Puffer auf das Display schreiben
    struct display_buffer_descriptor desc = {
        .buf_size = sizeof(buf),
        .width = 128,
        .height = 8, // Höhe für eine Zeile
        .pitch = 128
    };

    int ret = display_write(display_dev, 0, 0, &desc, buf); // Ab (0,0) schreiben
    if (ret < 0) {
        LOG_ERR("Failed to write to display (error %d)", ret);
        return ret;
    }

    LOG_INF("Hello World written to display");

    return 0;
}
