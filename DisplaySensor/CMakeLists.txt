cmake_minimum_required(VERSION 3.20.0)
set(SHIELD ssd1306_128x64)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(sensortest)

target_sources(app PRIVATE
    src/main.c
    src/display_custom.c
    src/lvgl_utils.c
    src/gpio_adc.c
	src/hbrslogo_bw.c
)


target_include_directories(app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
	)
