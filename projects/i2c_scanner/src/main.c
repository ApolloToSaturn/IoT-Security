#include <zephyr/device.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(i2c_scanner);

void main(void) {
    const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2)); // I²C2 wird verwendet
    if (!device_is_ready(i2c_dev)) {
        LOG_ERR("I2C device not ready");
        return;
    }

    LOG_INF("Starting I2C scan...");

    for (uint8_t addr = 0x03; addr <= 0x77; addr++) { // I²C-Adressenbereich
        uint8_t data;
        int ret = i2c_read(i2c_dev, &data, 1, addr);
        if (ret == 0) {
            LOG_INF("I2C device found at address 0x%02X", addr);
        }
    }

    LOG_INF("I2C scan completed");
}
