#include <zephyr/device.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

#include "i2c_scanner.h"

LOG_MODULE_REGISTER(main);

int main(void) {
    i2c_scan();
    return 0;
}
