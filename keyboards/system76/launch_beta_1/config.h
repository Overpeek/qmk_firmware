#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1776
#define PRODUCT_ID      0x1776
#define DEVICE_VER      0x0001
#define MANUFACTURER    System76
#define PRODUCT         Launch Keyboard Beta 1
#define DESCRIPTION     Launch Keyboard Beta 1

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D7, C7, C6, B6, B5, B4, D6, D4, E6, D5, D3, D2, B7, B0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define RGB_DI_PIN E2
#define RGBLED_NUM 84
#define RGBLIGHT_ANIMATIONS
// Limit brightness to support USB-A at 0.5A
//TODO: do this dynamically based on power source
#define RGBLIGHT_LIMIT_VAL 176

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// Dynamic keyboard support {
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage
#define EEPROM_SIZE 1024

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x76EC
#define EEPROM_MAGIC_ADDR 64
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x01
#define EEPROM_VERSION_ADDR (EEPROM_MAGIC_ADDR + 2)

// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR (EEPROM_VERSION_ADDR + 1)
#define DYNAMIC_KEYMAP_EEPROM_SIZE (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2)
// Dynamic macro starts after dynamic keymaps
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR (DYNAMIC_KEYMAP_EEPROM_ADDR + DYNAMIC_KEYMAP_EEPROM_SIZE)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE (EEPROM_SIZE - DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR)
#define DYNAMIC_KEYMAP_MACRO_COUNT 16
// } Dynamic keyboard support

#endif // CONFIG_H