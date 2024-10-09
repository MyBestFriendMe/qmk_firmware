#include QMK_KEYBOARD_H

//LED Indicator for gaming layer. May inclued num_lock light as well eventually
void keyboard_pre_init_user(void) {
setPinOutput(F5);
}
layer_state_t layer_state_set_user(layer_state_t state) {  //Make sure that LED is wired from IO pin to GND.
    if(IS_LAYER_ON_STATE(state, 1)) {
        writePinHigh(F5);
    }
    else {
        writePinLow(F5);
    }
return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   *
   *
   * ,-------------------.
   * |TG 1|MUTE|V UP|V DN|
   * |----|----|----|----|
   * | NL | /  | *  | -  |
   * |----|----|----|----|
   * | 7  | 8  | 9  |    |
   * |----|----|----| +  |
   * | 4  | 5  | 6  |    |
   * |----|----|----|----|
   * | 1  | 2  | 3  |    |
   * |----|----|----| En |
   * |    0    | .  |    |
   * `-------------------'
   */

  [0] = LAYOUT_numpad_6x4(
    TG(1), KC_MUTE, KC_VOLD, KC_VOLU,
    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,   KC_P8,   KC_P9,
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,
    KC_P0, KC_PDOT,  KC_PENT
  ),
  /*
   *
   *
   * ,-------------------.
   * |TG 1|MUTE|V UP|V DN|
   * |----|----|----|----|
   * | NL | /  | *  | -  |
   * |----|----|----|----|
   * | 7  | 8  | 9  |    |
   * |----|----|----| +  |
   * | 4  | UP | 6  |    |
   * |----|----|----|----|
   * |LEFT|DOWN|RGHT|    |
   * |----|----|----|CLK |
   * |  LCTRL  | .  |    |
   * `-------------------'
   */
  [1] = LAYOUT_numpad_6x4(
    TG(1),   KC_MUTE, KC_VOLD, KC_VOLU,
    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,   KC_P8,   KC_P9,
    KC_P4,   KC_UP,   KC_P6,   KC_PPLS,
    KC_LEFT, KC_DOWN, KC_RGHT,
    KC_LCTL, KC_PDOT, KC_BTN1
  ),

};



