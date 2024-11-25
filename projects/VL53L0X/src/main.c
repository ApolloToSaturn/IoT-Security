#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>

#include "i2c_scanner.h"


LOG_MODULE_REGISTER(ssd1315_display, LOG_LEVEL_INF);

const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2));

int main(void) {
    i2c_scan();

    return 0;
}