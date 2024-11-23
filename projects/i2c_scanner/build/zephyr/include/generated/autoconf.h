#define CONFIG_FLASH_LOAD_SIZE 0x30000
#define CONFIG_FLASH_LOAD_OFFSET 0x50000
#define CONFIG_I2C 1
#define CONFIG_NUM_IRQS 65
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_PLATFORM_SPECIFIC_INIT 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_PINCTRL 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_XIP 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_BUILD_WITH_TFM 1
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_SERIAL_INIT_PRIORITY 50
#define CONFIG_GPIO 1
#define CONFIG_SERIAL 1
#define CONFIG_MBEDTLS 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LOG 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_SOC "nrf9160"
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_LOG_DOMAIN_NAME ""
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_SOC_HAS_TIMING_FUNCTIONS 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_CONSOLE 1
#define CONFIG_SOC_SERIES "nrf91"
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_DT_HAS_ARDUINO_UNO_ADC_ENABLED 1
#define CONFIG_DT_HAS_ARDUINO_HEADER_R3_ENABLED 1
#define CONFIG_DT_HAS_ARM_ARMV8M_MPU_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M33F_ENABLED 1
#define CONFIG_DT_HAS_ARM_V8M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_DPPIC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_EGU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIOTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPREGRET_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_IPC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_KMU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_POWER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PWM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_REGULATORS_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SAADC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SPIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TWIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UARTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_VMC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_WDT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF91_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF9160DK_NRF52840_INTERFACE_ENABLED 1
#define CONFIG_DT_HAS_PWM_LEDS_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_ENTROPY_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_PSA_CRYPTO_RNG_ENABLED 1
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_LOG_BUFFER_SIZE 1024
#define CONFIG_MBEDTLS_CIPHER_MODE_CFB 1
#define CONFIG_MBEDTLS_CIPHER_MODE_OFB 1
#define CONFIG_MBEDTLS_SHA512_C 1
#define CONFIG_MBEDTLS_PSA_KEY_SLOT_COUNT 32
#define CONFIG_MPSL_WORK_STACK_SIZE 1024
#define CONFIG_MBEDTLS_MD_C 1
#define CONFIG_MBEDTLS_LEGACY_CRYPTO_C 1
#define CONFIG_TFM_MCUBOOT_IMAGE_NUMBER 1
#define CONFIG_TFM_CRYPTO_RNG_MODULE_ENABLED 1
#define CONFIG_TFM_PARTITION_CRYPTO 1
#define CONFIG_TFM_PARTITION_PLATFORM 1
#define CONFIG_WARN_EXPERIMENTAL 1
#define CONFIG_INIT_ARCH_HW_AT_BOOT 1
#define CONFIG_NORDIC_QSPI_NOR_FLASH_LAYOUT_PAGE_SIZE 4096
#define CONFIG_PM_PARTITION_SIZE_PROVISION 0x280
#define CONFIG_PM_PARTITION_SIZE_B0_IMAGE 0x8000
#define CONFIG_SB_VALIDATION_INFO_MAGIC 0x86518483
#define CONFIG_SB_VALIDATION_POINTER_MAGIC 0x6919b47e
#define CONFIG_SB_VALIDATION_INFO_CRYPTO_ID 1
#define CONFIG_SB_VALIDATION_INFO_VERSION 2
#define CONFIG_SB_VALIDATION_METADATA_OFFSET 0
#define CONFIG_SB_VALIDATE_FW_SIGNATURE 1
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_HEAP_MEM_POOL_SIZE 512
#define CONFIG_PCD_VERSION_PAGE_BUF_SIZE 2046
#define CONFIG_NRF_CLOUD_CLIENT_ID_SRC_IMEI 1
#define CONFIG_NRF_CLOUD_CLIENT_ID_PREFIX "nrf-"
#define CONFIG_FOTA_USE_NRF_CLOUD_SETTINGS_AREA 1
#define CONFIG_FOTA_DL_TIMEOUT_MIN 15
#define CONFIG_NRF_CLOUD_ALERT_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_CLOUD_ALERT_LOG_LEVEL 3
#define CONFIG_NRF_CLOUD_LOG_OUTPUT_LEVEL 1
#define CONFIG_NRF_CLOUD_LOG_BUF_SIZE 256
#define CONFIG_NRF_CLOUD_LOG_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_CLOUD_LOG_LOG_LEVEL 3
#define CONFIG_NRF_CLOUD_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_CLOUD_LOG_LEVEL 3
#define CONFIG_MPSL_FEM_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPSL_FEM_LOG_LEVEL 3
#define CONFIG_MPSL_THREAD_COOP_PRIO 8
#define CONFIG_MPSL_TIMESLOT_SESSION_COUNT 0
#define CONFIG_MPSL_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPSL_LOG_LEVEL 3
#define CONFIG_PARTITION_MANAGER_ENABLED 1
#define CONFIG_FLASH_MAP_CUSTOM 1
#define CONFIG_SRAM_SIZE 128
#define CONFIG_SRAM_BASE_ADDRESS 0x20020000
#define CONFIG_PM_SINGLE_IMAGE 1
#define CONFIG_PM_EXTERNAL_FLASH_BASE 0x0
#define CONFIG_PM_EXTERNAL_FLASH_PATH ""
#define CONFIG_PM_EXTERNAL_FLASH_SIZE_BITS 0
#define CONFIG_PM_SRAM_BASE 0x20000000
#define CONFIG_PM_SRAM_SIZE 0x40000
#define CONFIG_MGMT_FMFU_LOG_LEVEL_DEFAULT 1
#define CONFIG_MGMT_FMFU_LOG_LEVEL 3
#define CONFIG_MGMT_SUITFU_TRIGGER_UPDATE_RESET_DELAY_MS 100
#define CONFIG_MGMT_SUITFU_AUTO_REGISTER_HANDLERS 1
#define CONFIG_MGMT_SUITFU_GRP_IMG 1
#define CONFIG_MGMT_SUITFU_IMAGE_NUMBER 0
#define CONFIG_MGMT_SUITFU_LOG_LEVEL_DEFAULT 1
#define CONFIG_MGMT_SUITFU_LOG_LEVEL 3
#define CONFIG_NORDIC_SECURITY_BACKEND 1
#define CONFIG_NRF_SECURITY 1
#define CONFIG_MBEDTLS_CFG_FILE "nrf-config.h"
#define CONFIG_MBEDTLS_USER_CONFIG_FILE "nrf-config-user-empty.h"
#define CONFIG_MBEDTLS_PSA_CRYPTO_CONFIG_FILE "nrf-psa-crypto-want-config.h"
#define CONFIG_MBEDTLS_PSA_CRYPTO_USER_CONFIG_FILE "nrf-psa-crypto-config.h"
#define CONFIG_GENERATE_MBEDTLS_CFG_FILE 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_C 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_CLIENT 1
#define CONFIG_PSA_WANT_GENERATE_RANDOM 1
#define CONFIG_PSA_WANT_ALG_HMAC_DRBG 1
#define CONFIG_PSA_CORE_OBERON 1
#define CONFIG_MBEDTLS_PSA_CRYPTO_DRIVERS 1
#define CONFIG_PSA_DEFAULT_OFF 1
#define CONFIG_PSA_CRYPTO_DRIVER_OBERON 1
#define CONFIG_PSA_USE_HMAC_DRBG_DRIVER 1
#define CONFIG_PSA_USE_CC3XX_HMAC_DRBG_DRIVER 1
#define CONFIG_PSA_WANT_AES_KEY_SIZE_128 1
#define CONFIG_PSA_WANT_AES_KEY_SIZE_192 1
#define CONFIG_PSA_WANT_AES_KEY_SIZE_256 1
#define CONFIG_PSA_MAX_RSA_KEY_BITS 0
#define CONFIG_PSA_ACCEL_GENERATE_RANDOM 1
#define CONFIG_PSA_NEED_CC3XX_HMAC_DRBG_DRIVER 1
#define CONFIG_CRACEN_LOG_LEVEL_DEFAULT 1
#define CONFIG_CRACEN_LOG_LEVEL 3
#define CONFIG_MBEDTLS_PLATFORM_MEMORY 1
#define CONFIG_MBEDTLS_PLATFORM_C 1
#define CONFIG_MBEDTLS_MEMORY_C 1
#define CONFIG_MBEDTLS_MEMORY_BUFFER_ALLOC_C 1
#define CONFIG_MBEDTLS_ENTROPY_HARDWARE_ALT 1
#define CONFIG_MBEDTLS_AES_SETKEY_ENC_ALT 1
#define CONFIG_MBEDTLS_AES_SETKEY_DEC_ALT 1
#define CONFIG_MBEDTLS_AES_ENCRYPT_ALT 1
#define CONFIG_MBEDTLS_AES_DECRYPT_ALT 1
#define CONFIG_MBEDTLS_CHACHA20_ALT 1
#define CONFIG_MBEDTLS_POLY1305_ALT 1
#define CONFIG_MBEDTLS_ECDH_GEN_PUBLIC_ALT 1
#define CONFIG_MBEDTLS_ECDH_COMPUTE_SHARED_ALT 1
#define CONFIG_MBEDTLS_ECDSA_GENKEY_ALT 1
#define CONFIG_MBEDTLS_ECDSA_SIGN_ALT 1
#define CONFIG_MBEDTLS_ECDSA_VERIFY_ALT 1
#define CONFIG_MBEDTLS_ECJPAKE_ALT 1
#define CONFIG_MBEDTLS_SHA1_ALT 1
#define CONFIG_MBEDTLS_SHA224_ALT 1
#define CONFIG_MBEDTLS_SHA256_ALT 1
#define CONFIG_MBEDTLS_ENTROPY_FORCE_SHA256 1
#define CONFIG_MBEDTLS_ENTROPY_MAX_SOURCES 1
#define CONFIG_MBEDTLS_NO_PLATFORM_ENTROPY 1
#define CONFIG_OBERON_ONLY_PSA_ENABLED 1
#define CONFIG_OBERON_ONLY_ENABLED 1
#define CONFIG_MBEDTLS_MPI_WINDOW_SIZE 6
#define CONFIG_MBEDTLS_MPI_MAX_SIZE 256
#define CONFIG_OBERON_BACKEND 1
#define CONFIG_MBEDTLS_CTR_DRBG_USE_128_BIT_KEY 1
#define CONFIG_MBEDTLS_HMAC_DRBG_C 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_MBEDTLS_HKDF_C 1
#define CONFIG_MBEDTLS_SHA224_C 1
#define CONFIG_MBEDTLS_SHA256_C 1
#define CONFIG_MBEDTLS_SHA384_C 1
#define CONFIG_MBEDTLS_CIPHER_C 1
#define CONFIG_MBEDTLS_LIBRARY_NRF_SECURITY 1
#define CONFIG_AUDIO_MODULE_NAME_SIZE 20
#define CONFIG_AUDIO_MODULE_LOG_LEVEL_DEFAULT 1
#define CONFIG_AUDIO_MODULE_LOG_LEVEL 3
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE -1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_WFA_QT_LOG_LEVEL_DEFAULT 1
#define CONFIG_WFA_QT_LOG_LEVEL 3
#define CONFIG_WFA_QT_THREAD_STACK_SIZE 4096
#define CONFIG_WFA_QT_REBOOT_TIMEOUT_MS 1000
#define CONFIG_WFA_QT_DEFAULT_INTERFACE "nordic_wlan0"
#define CONFIG_WPAS_READY_TIMEOUT_MS 10000
#define CONFIG_NRF_MODEM_LIB 1
#define CONFIG_NRF_MODEM_LIB_HEAP_SIZE 1024
#define CONFIG_NRF_MODEM_LIB_SHMEM_CTRL_SIZE 0x4e8
#define CONFIG_NRF_MODEM_LIB_SHMEM_TX_SIZE 8320
#define CONFIG_NRF_MODEM_LIB_SHMEM_RX_SIZE 8192
#define CONFIG_NRF_MODEM_LIB_SHMEM_TRACE_SIZE 0
#define CONFIG_NRF_MODEM_LIB_SENDMSG_BUF_SIZE 128
#define CONFIG_NRF_MODEM_LIB_ON_FAULT_DO_NOTHING 1
#define CONFIG_NRF_MODEM_LIB_CFUN_HOOKS 1
#define CONFIG_NRF_MODEM_LIB_IPC_IRQ_PRIO 1
#define CONFIG_NRF_MODEM_LIB_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_MODEM_LIB_LOG_LEVEL 3
#define CONFIG_NRF_SPU_FLASH_REGION_SIZE 0x8000
#define CONFIG_FPROTECT_BLOCK_SIZE 0x8000
#define CONFIG_HW_UNIQUE_KEY_SUPPORTED 1
#define CONFIG_HW_UNIQUE_KEY_PARTITION_SIZE 0x0
#define CONFIG_MODEM_ANTENNA 1
#define CONFIG_MODEM_ANTENNA_GNSS_ONBOARD 1
#define CONFIG_MODEM_ANTENNA_AT_MAGPIO "AT%XMAGPIO=1,0,0,1,1,1574,1577"
#define CONFIG_MODEM_ANTENNA_AT_COEX0 "AT%XCOEX0=1,1,1565,1586"
#define CONFIG_MODEM_ANTENNA_AT_MIPIRFFEDEV ""
#define CONFIG_MODEM_ANTENNA_AT_MIPIRFFECTRL_INIT ""
#define CONFIG_MODEM_ANTENNA_AT_MIPIRFFECTRL_ON ""
#define CONFIG_MODEM_ANTENNA_AT_MIPIRFFECTRL_OFF ""
#define CONFIG_MODEM_ANTENNA_AT_MIPIRFFECTRL_PWROFF ""
#define CONFIG_MODEM_ANTENNA_LOG_LEVEL_DEFAULT 1
#define CONFIG_MODEM_ANTENNA_LOG_LEVEL 3
#define CONFIG_NCS_BOOT_BANNER 1
#define CONFIG_NCS_NCS_BOOT_BANNER_STRING "nRF Connect SDK"
#define CONFIG_NCS_ZEPHYR_BOOT_BANNER_STRING "Zephyr OS"
#define CONFIG_NRFX_GPIOTE_NUM_OF_EVT_HANDLERS 1
#define CONFIG_ZTEST_MULTICORE_DEFAULT_SETTINGS 1
#define CONFIG_ZEPHYR_NRF_MODULE 1
#define CONFIG_BOOT_SIGNATURE_KEY_FILE ""
#define CONFIG_DT_FLASH_WRITE_BLOCK_SIZE 4
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_DISABLE_MBEDTLS_BUILTIN 1
#define CONFIG_MBEDTLS_LOG_LEVEL_DEFAULT 1
#define CONFIG_MBEDTLS_LOG_LEVEL 3
#define CONFIG_MBEDTLS_INIT 1
#define CONFIG_APP_LINK_WITH_MBEDTLS 1
#define CONFIG_ZEPHYR_OBERON_PSA_CRYPTO_MODULE 1
#define CONFIG_TFM_BOARD "C:/ncs/v2.7.0/nrf/modules/trusted-firmware-m/tfm_boards/nrf9160"
#define CONFIG_TFM_ISOLATION_LEVEL 1
#define CONFIG_TFM_QCBOR_PATH "C:/ncs/v2.7.0/modules/tee/tf-m/trusted-firmware-m/../qcbor"
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_TFM_KEY_FILE_S "C:/ncs/v2.7.0/modules/tee/tf-m/trusted-firmware-m/bl2/ext/mcuboot/root-RSA-3072.pem"
#define CONFIG_TFM_KEY_FILE_NS "C:/ncs/v2.7.0/modules/tee/tf-m/trusted-firmware-m/bl2/ext/mcuboot/root-RSA-3072_1.pem"
#define CONFIG_TFM_CMAKE_BUILD_TYPE_MINSIZEREL 1
#define CONFIG_TFM_PARTITION_PLATFORM_CUSTOM_REBOOT 1
#define CONFIG_TFM_BL2_NOT_SUPPORTED 1
#define CONFIG_TFM_IMAGE_VERSION_S "0.0.0+0"
#define CONFIG_TFM_IMAGE_VERSION_NS "0.0.0+0"
#define CONFIG_TFM_SFN 1
#define CONFIG_TFM_PSA_TEST_NONE 1
#define CONFIG_TFM_FLASH_MERGED_BINARY 1
#define CONFIG_TFM_SPM_LOG_LEVEL_INFO 1
#define CONFIG_TFM_EXCEPTION_INFO_DUMP 1
#define CONFIG_TFM_PLATFORM_SERVICE_INPUT_BUFFER_SIZE 64
#define CONFIG_TFM_PLATFORM_SERVICE_OUTPUT_BUFFER_SIZE 64
#define CONFIG_TFM_PLATFORM_SP_STACK_SIZE 0x500
#define CONFIG_TFM_PLATFORM_NV_COUNTER_MODULE_DISABLED 1
#define CONFIG_TFM_CRYPTO_ENGINE_BUF_SIZE 1
#define CONFIG_TFM_CRYPTO_CONC_OPER_NUM 1
#define CONFIG_TFM_CRYPTO_IOVEC_BUFFER_SIZE 1024
#define CONFIG_TFM_CRYPTO_PARTITION_STACK_SIZE 0x800
#define CONFIG_PM_PARTITION_SIZE_TFM_SRAM 0x8000
#define CONFIG_PM_PARTITION_SIZE_TFM 0x8000
#define CONFIG_PM_PARTITION_SIZE_TFM_PROTECTED_STORAGE 0x0
#define CONFIG_PM_PARTITION_SIZE_TFM_INTERNAL_TRUSTED_STORAGE 0x0
#define CONFIG_PM_PARTITION_SIZE_TFM_OTP_NV_COUNTERS 0x0
#define CONFIG_NRF_UARTE1_SECURE 1
#define CONFIG_NRF_GPIO0_PIN_MASK_SECURE 0x00000000
#define CONFIG_NRF_DPPI_CHANNEL_MASK_SECURE 0x00000000
#define CONFIG_NRF_VMC_SECURE 1
#define CONFIG_TFM_PROFILE_TYPE_MINIMAL 1
#define CONFIG_TFM_SECURE_UART 1
#define CONFIG_TFM_SECURE_UART1 1
#define CONFIG_TFM_HALT_ON_CORE_PANIC 1
#define CONFIG_TFM_ALLOW_NON_SECURE_RESET 1
#define CONFIG_TFM_ALLOW_NON_SECURE_FAULT_HANDLING 1
#define CONFIG_TFM_S_CODE_VECTOR_TABLE_SIZE 0x144
#define CONFIG_ZEPHYR_PSA_ARCH_TESTS_MODULE 1
#define CONFIG_ZEPHYR_SOC_HWMV1_MODULE 1
#define CONFIG_ZEPHYR_CJSON_MODULE 1
#define CONFIG_ZEPHYR_AZURE_SDK_FOR_C_MODULE 1
#define CONFIG_ZEPHYR_CIRRUS_LOGIC_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_SUIT_ENVELOPE_TEMPLATE ""
#define CONFIG_SUIT_ENVELOPE_TARGET ""
#define CONFIG_SUIT_ENVELOPE_OUTPUT_ARTIFACT "merged.hex"
#define CONFIG_SUIT_ENVELOPE_OUTPUT_MPI_MERGE 1
#define CONFIG_ZEPHYR_SUIT_GENERATOR_MODULE 1
#define CONFIG_SUIT_PLATFORM_DRY_RUN_SUPPORT 1
#define CONFIG_ZEPHYR_SUIT_PROCESSOR_MODULE 1
#define CONFIG_ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE 1
#define CONFIG_ZEPHYR_COREMARK_MODULE 1
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_CHRE_MODULE 1
#define CONFIG_ZEPHYR_LZ4_MODULE 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_TF_M_TESTS_MODULE 1
#define CONFIG_ZEPHYR_ZSCILIB_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_CLOCK 1
#define CONFIG_NRFX_CLOCK_LFXO_TWO_STAGE_ENABLED 1
#define CONFIG_NRFX_DPPI 1
#define CONFIG_NRFX_GPIOTE 1
#define CONFIG_NRFX_GPIOTE1 1
#define CONFIG_NRFX_IPC 1
#define CONFIG_NRFX_TWIM 1
#define CONFIG_NRFX_TWIM2 1
#define CONFIG_ZEPHYR_HAL_ST_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_NRF_MODEM 1
#define CONFIG_NRF_MODEM_LINK_BINARY_CELLULAR 1
#define CONFIG_NRF_MODEM_SHMEM_CTRL_SIZE 0x4e8
#define CONFIG_HAS_HW_NRF_CC3XX 1
#define CONFIG_NRF_OBERON 1
#define CONFIG_NRF_802154_SOURCE_NRFXLIB 1
#define CONFIG_ZEPHYR_NRFXLIB_MODULE 1
#define CONFIG_ZEPHYR_CONNECTEDHOMEIP_MODULE 1
#define CONFIG_BOARD "nrf9160dk"
#define CONFIG_BOARD_REVISION "0.14.0"
#define CONFIG_BOARD_TARGET "nrf9160dk@0.14.0/nrf9160/ns"
#define CONFIG_BOARD_NRF9160DK 1
#define CONFIG_BOARD_NRF9160DK_NRF9160_NS 1
#define CONFIG_BOARD_QUALIFIERS "nrf9160/ns"
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_SOC_FAMILY_NORDIC_NRF 1
#define CONFIG_SOC_SERIES_NRF91X 1
#define CONFIG_SOC_NRF9160 1
#define CONFIG_SOC_NRF9160_SICA 1
#define CONFIG_HAS_HW_NRF_CC310 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_DPPIC 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIOTE1 1
#define CONFIG_HAS_HW_NRF_IPC 1
#define CONFIG_HAS_HW_NRF_KMU 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PWM0 1
#define CONFIG_HAS_HW_NRF_REGULATORS 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SPIM3 1
#define CONFIG_HAS_HW_NRF_TWIM2 1
#define CONFIG_HAS_HW_NRF_UARTE0 1
#define CONFIG_HAS_HW_NRF_VMC 1
#define CONFIG_HAS_HW_NRF_WDT0 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_NRF_SPU_FLASH_REGION_ALIGNMENT 0x8000
#define CONFIG_NRF_SPU_RAM_REGION_SIZE 0x2000
#define CONFIG_NRF_SPU_RAM_REGION_ALIGNMENT 0x2000
#define CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT 0
#define CONFIG_NRF_SOC_SECURE_SUPPORTED 1
#define CONFIG_TFM_NRF_NS_STORAGE 1
#define CONFIG_NRF_APPROTECT_USE_UICR 1
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_LOG_LEVEL_DEFAULT 1
#define CONFIG_SOC_LOG_LEVEL 3
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_CPU_CORTEX 1
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_BUILTIN_STACK_GUARD 1
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_ARM_NONSECURE_FIRMWARE 1
#define CONFIG_ARM_NONSECURE_PREEMPTIBLE_SECURE_CALLS 1
#define CONFIG_ARM_STORE_EXC_RETURN 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M33 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_SPLIM 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_CPU_CORTEX_M_HAS_CMSE 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV8_M_SE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_ARMV8_M_DSP 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_ARM_TRUSTZONE_M 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_CPU_HAS_NRF_IDAU 1
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_ARCH_LOG_LEVEL_DEFAULT 1
#define CONFIG_ARCH_LOG_LEVEL 3
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_TRUSTED_EXECUTION_NONSECURE 1
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ISR_TABLES_LOCAL_DECLARATION_SUPPORTED 1
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_TRUSTED_EXECUTION 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_TEE 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPU_LOG_LEVEL 3
#define CONFIG_MPU_REQUIRES_NON_OVERLAPPING_REGIONS 1
#define CONFIG_MPU_GAP_FILLING 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_KERNEL_LOG_LEVEL_DEFAULT 1
#define CONFIG_KERNEL_LOG_LEVEL 3
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_CURRENT_THREAD_USE_TLS 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_ARCH_MEM_DOMAIN_SUPPORTS_ISOLATED_STACKS 1
#define CONFIG_MEM_DOMAIN_ISOLATED_STACKS 1
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL_DEFAULT 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL 3
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM 1
#define CONFIG_CLOCK_CONTROL_NRF_ACCURACY 50
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL 3
#define CONFIG_GPIO_LOG_LEVEL_DEFAULT 1
#define CONFIG_GPIO_LOG_LEVEL 3
#define CONFIG_GPIO_NRFX 1
#define CONFIG_GPIO_NRFX_INTERRUPT 1
#define CONFIG_I2C_NRFX 1
#define CONFIG_I2C_NRFX_TWIM 1
#define CONFIG_I2C_NRFX_TRANSFER_TIMEOUT 500
#define CONFIG_I2C_DMA_TCB_BUFFER_SIZE 1024
#define CONFIG_I2C_INIT_PRIORITY 50
#define CONFIG_I2C_LOG_LEVEL_DEFAULT 1
#define CONFIG_I2C_LOG_LEVEL 3
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_INTC_LOG_LEVEL_DEFAULT 1
#define CONFIG_INTC_LOG_LEVEL 3
#define CONFIG_PINCTRL_LOG_LEVEL_DEFAULT 1
#define CONFIG_PINCTRL_LOG_LEVEL 3
#define CONFIG_PINCTRL_STORE_REG 1
#define CONFIG_PINCTRL_NRF 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_ASYNC 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_LOG_LEVEL 3
#define CONFIG_UART_NRFX 1
#define CONFIG_UART_NRFX_UARTE 1
#define CONFIG_UART_NRFX_UARTE_LEGACY_SHIM 1
#define CONFIG_UART_0_ENHANCED_POLL_OUT 1
#define CONFIG_UART_0_NRF_TX_BUFFER_SIZE 32
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL 3
#define CONFIG_USBC_LOG_LEVEL_DEFAULT 1
#define CONFIG_USBC_LOG_LEVEL 3
#define CONFIG_REQUIRES_FULL_LIBC 1
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_USE_TOOLCHAIN 1
#define CONFIG_PICOLIBC_HEAP_SIZE -2
#define CONFIG_PICOLIBC_IO_LONG_LONG 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_AUTO 1
#define CONFIG_MPSC_PBUF 1
#define CONFIG_HAS_POWEROFF 1
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL_DEFAULT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL 3
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_ENV_LOG_LEVEL_DEFAULT 1
#define CONFIG_POSIX_ENV_LOG_LEVEL 3
#define CONFIG_SEM_VALUE_MAX 32767
#define CONFIG_SEM_NAMELEN_MAX 16
#define CONFIG_POSIX_RTSIG_MAX 0
#define CONFIG_POSIX_PAGE_SIZE_BITS 6
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_NOTIFY 1
#define CONFIG_ONOFF 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_LLEXT_EDK_NAME "llext-edk"
#define CONFIG_LOG_CORE_INIT_PRIORITY 0
#define CONFIG_LOG_MODE_DEFERRED 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_OVERRIDE_LEVEL 0
#define CONFIG_LOG_MAX_LEVEL 4
#define CONFIG_LOG_PRINTK 1
#define CONFIG_LOG_MODE_OVERFLOW 1
#define CONFIG_LOG_PROCESS_TRIGGER_THRESHOLD 10
#define CONFIG_LOG_PROCESS_THREAD 1
#define CONFIG_LOG_PROCESS_THREAD_STARTUP_DELAY_MS 0
#define CONFIG_LOG_PROCESS_THREAD_SLEEP_MS 1000
#define CONFIG_LOG_PROCESS_THREAD_STACK_SIZE 768
#define CONFIG_LOG_TRACE_SHORT_TIMESTAMP 1
#define CONFIG_LOG_FUNC_NAME_PREFIX_DBG 1
#define CONFIG_LOG_BACKEND_SHOW_COLOR 1
#define CONFIG_LOG_TAG_MAX_LEN 0
#define CONFIG_LOG_BACKEND_FORMAT_TIMESTAMP 1
#define CONFIG_LOG_BACKEND_UART 1
#define CONFIG_LOG_BACKEND_UART_BUFFER_SIZE 1
#define CONFIG_LOG_BACKEND_UART_AUTOSTART 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_TEXT 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_DEFAULT 0
#define CONFIG_LOG_DOMAIN_ID 0
#define CONFIG_LOG_USE_VLA 1
#define CONFIG_LOG_SIMPLE_MSG_OPTIMIZE 1
#define CONFIG_LOG_FAILURE_REPORT_PERIOD 1000
#define CONFIG_LOG_OUTPUT 1
#define CONFIG_MEM_ATTR 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_COVERAGE_GCOV_HEAP_SIZE 16384
#define CONFIG_TOOLCHAIN_ZEPHYR_0_16 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_ITERABLE_SUBALIGN 4
#define CONFIG_LINKER_DEVNULL_SUPPORT 1
#define CONFIG_STD_C99 1
#define CONFIG_TOOLCHAIN_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
