#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/drivers/sensor.h>
#include <stdio.h>

#include "i2c_scanner.h"
#include "VL53L0X.h"


LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

const struct device *sensor = DEVICE_DT_GET(DT_NODELABEL(i2c2));

int main(void) {
    struct sensor_value value;
	int ret;

    i2c_scan();

    LOG_INF("VL53L0X-Test beginnt...");
    while (1) {
		ret = sensor_sample_fetch(sensor);
		if (ret) {
			LOG_ERR("sensor_sample_fetch failed ret %d\n", ret);
			return -1;
		}

		ret = sensor_channel_get(sensor, SENSOR_CHAN_PROX, &value);
		LOG_INF("prox is %d\n", value.val1);

		ret = sensor_channel_get(sensor,
					 SENSOR_CHAN_DISTANCE,
					 &value);
		LOG_INF("distance is %.3fm\n", sensor_value_to_double(&value));

		k_sleep(K_MSEC(1000));
	}
	return 0;
}