// Copyright 2023 Adam Tombleson (@rekarnar)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC , KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R  ,
        KC_F   , KC_LSFT, KC_A   , KC_S   , KC_D   , KC_G  ,
        KC_CAPS, KC_B   , KC_Z   , KC_X   , KC_C   , KC_V  ,
                           KC_LGUI, KC_BSPC,
                                    KC_LALT, KC_SPC, TG(0)
    ),

    [1] = LAYOUT(
        _______,_______,_______, KC_UP  ,_______ ,_______,
        _______,_______,KC_LEFT, KC_DOWN,KC_RGHT ,_______,
        _______,_______,_______,_______ ,_______ ,_______,
                        _______,_______ ,
                                KC_BTN1 , KC_LCTL, TO(0)
    ),

    [2] = LAYOUT(
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
                        _______,_______,
                                _______,_______, TO(0)
    ),

    [3] = LAYOUT(
        _______,_______,_______,_______,_______,_______,
        KC_CAPS,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
                        _______,_______,
                                _______,_______,_______
    ),
};
