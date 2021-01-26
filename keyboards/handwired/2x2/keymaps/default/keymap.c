#include QMK_KEYBOARD_H

enum layers {
  NORMAL_LAYER = 0,
   SECOND_LAYER
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [NORMAL_LAYER] = LAYOUT(
        KC_1, KC_2,
        KC_3, TO(1) 
    ),
    [SECOND_LAYER] = LAYOUT(
        KC_A, KC_B,
        KC_C, TO(0) 
    )
};

