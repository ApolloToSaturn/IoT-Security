# Install script for directory: E:/Uni/WS2425/IoT_Security/NRF/v2.8.0/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/Zephyr-Kernel")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "E:/Uni/WS2425/IoT_Security/NRF/toolchains/2d382dcd92/opt/zephyr-sdk/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/arch/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/lib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/soc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/boards/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/subsys/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/drivers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/nrf/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/mcuboot/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/mbedtls/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/trusted-firmware-m/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/cjson/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/azure-sdk-for-c/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/cirrus-logic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/openthread/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/suit-processor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/memfault-firmware-sdk/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/canopennode/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/chre/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/lz4/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/nanopb/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/zscilib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/cmsis/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/cmsis-dsp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/cmsis-nn/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/fatfs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/hal_nordic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/hal_st/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/hal_wurthelektronik/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/hostap/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/libmetal/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/liblc3/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/littlefs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/loramac-node/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/lvgl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/mipi-sys-t/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/nrf_hw_models/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/open-amp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/picolibc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/segger/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/tinycrypt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/uoscore-uedhoc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/zcbor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/nrfxlib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/modules/connectedhomeip/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/kernel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/cmake/flash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/cmake/usage/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("E:/Uni/WS2425/IoT_Security/NRF/Projekt/SSD1306/lvgl/SSD1306/zephyr/cmake/reports/cmake_install.cmake")
endif()

