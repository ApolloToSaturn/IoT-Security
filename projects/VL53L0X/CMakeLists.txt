cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(VL53L0X)

target_sources(app PRIVATE
    src/main.c
    src/i2c_scanner.c
    drivers/VL53L0X/VL53L0X.c
)

# Füge den neuen include-Pfad hinzu
target_include_directories(app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/VL53L0X
)