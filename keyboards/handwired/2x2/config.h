#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define MANUFACTURER    KlepOrcs
#define PRODUCT         A 2x2

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* define direct pins used */
#define DIRECT_PINS { { C4,C5}, { D5,D6} }


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
