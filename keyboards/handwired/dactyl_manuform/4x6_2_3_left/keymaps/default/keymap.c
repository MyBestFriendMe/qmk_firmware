// Copyright 2023 Adam Tombleson (@rekarnar)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC  , KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   ,
        KC_F    , KC_LSFT, KC_A   , KC_S   , KC_D   , KC_G   ,
        KC_BSPC , KC_B   , KC_Z   , KC_X   , KC_C   , KC_V   ,
                           KC_LGUI, KC_CAPS,
                                    KC_LALT, KC_SPC , KC_ENT
    ),
};
