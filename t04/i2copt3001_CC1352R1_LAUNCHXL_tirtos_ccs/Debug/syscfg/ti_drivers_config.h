/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  DO NOT EDIT - This file is generated for the CC1352R1_LAUNCHXL
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_CC1352R1_LAUNCHXL

#ifndef DeviceFamily_CC13X2
#define DeviceFamily_CC13X2
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== GPIO ========
 */

/* DIO6, LaunchPad LED Red */
#define CONFIG_LED_0_GPIO           0
/* DIO27, OPT3001 Interrupt */
#define CONFIG_GPIO_OPT3001_INT     1
/* DIO29, OPT3001 Power */
#define CONFIG_GPIO_OPT3001_PWR     2

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== I2C ========
 */

/*
 *  SCL: DIO4
 *  SDA: DIO5
 *  BAS Sensors BoosterPack I2C
 */
#define CONFIG_I2C_OPT              0

/* ======== I2C Addresses and Speeds ======== */
#include <ti/drivers/I2C.h>

/* ---- CONFIG_I2C_OPT I2C bus components ---- */

/* BOOSTXL_BASSENSORS/TMP116 address and max speed */
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_TMP116_ADDR     (0x48)
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_TMP116_MAXSPEED (400U) /* Kbps */

/* BOOSTXL_BASSENSORS/OPT3001 address and max speed */
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_OPT3001_ADDR     (0x44)
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_OPT3001_MAXSPEED (2600U) /* Kbps */

/* BOOSTXL_BASSENSORS/HDC2010 address and max speed */
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_HDC2010_ADDR     (0x40)
#define CONFIG_I2C_OPT_BOOSTXL_BASSENSORS_HDC2010_MAXSPEED (400U) /* Kbps */

/* CONFIG_I2C_OPT max speed (supported by all components) */
#define CONFIG_I2C_OPT_MAXSPEED   (400U) /* Kbps */
#define CONFIG_I2C_OPT_MAXBITRATE ((I2C_BitRate)I2C_400kHz)


/*
 *  ======== PIN ========
 */

/* Includes */
#include <ti/drivers/PIN.h>

/* Externs */
extern const PIN_Config BoardGpioInitTable[];

/* LaunchPad LED Red, Parent Signal: CONFIG_LED_0_GPIO GPIO Pin, (DIO6) */
#define CONFIG_PIN_4    0x00000006
/* OPT3001 Interrupt, Parent Signal: CONFIG_GPIO_OPT3001_INT GPIO Pin, (DIO27) */
#define CONFIG_PIN_5    0x0000001b
/* OPT3001 Power, Parent Signal: CONFIG_GPIO_OPT3001_PWR GPIO Pin, (DIO29) */
#define CONFIG_PIN_6    0x0000001d
/* BAS Sensors BoosterPack I2C, Parent Signal: CONFIG_I2C_OPT SDA, (DIO5) */
#define CONFIG_PIN_2    0x00000005
/* BAS Sensors BoosterPack I2C, Parent Signal: CONFIG_I2C_OPT SCL, (DIO4) */
#define CONFIG_PIN_3    0x00000004
/* XDS110 UART, Parent Signal: CONFIG_UART_0 TX, (DIO13) */
#define CONFIG_PIN_0    0x0000000d
/* XDS110 UART, Parent Signal: CONFIG_UART_0 RX, (DIO12) */
#define CONFIG_PIN_1    0x0000000c


/*
 *  ======== UART ========
 */

/*
 *  TX: DIO13
 *  RX: DIO12
 *  XDS110 UART
 */
#define CONFIG_UART_0               0


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
