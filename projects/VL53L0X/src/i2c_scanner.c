#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(I2C_scanner);

void i2c_scan(void) {
    const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2)); // I²C2 wird verwendet
    if (!device_is_ready(i2c_dev)) {
        LOG_ERR("I2C device i2c2 not ready");
        return;
    }

    LOG_INF("Starting I2C scan on I2C2...");

    for (uint8_t addr = 0x03; addr <= 0x77; addr++) { // I²C-Adressenbereich
        uint8_t data = 0;  // Dummy-Daten
        int ret = i2c_read(i2c_dev, &data, 1, addr);

        if (ret == 0) {
            LOG_INF("I2C device found at address 0x%02X", addr);
        } else if (ret != -EIO) {  // Ignoriere "No ACK received"-Fehler
            LOG_WRN("Error 0x%02X at address: 0x%02X", ret, addr);
        }
    }

    LOG_INF("I2C scan completed.");
}
