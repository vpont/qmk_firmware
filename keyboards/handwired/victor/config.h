#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Víctor
#define PRODUCT         Keyboard
#define DESCRIPTION     Custom handwired TKL keyboard

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* Key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B7, D0, D1, D2, C6, D3, C7, D7, B4, B5, B6 }
#define UNUSED_PINS { D4, D5, D6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
