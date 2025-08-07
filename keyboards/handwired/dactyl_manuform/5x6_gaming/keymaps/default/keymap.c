
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        _______, _______, _______, _______, _______, _______,
        KC_ESC , KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R  ,
        KC_V   , KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F  ,
        KC_M   , KC_B   , KC_Z   , KC_2   , KC_C   , KC_1  ,
        TG(1)  , KC_K   , KC_LGUI, KC_G   , KC_MUTE,
                                    KC_LCTL, KC_SPC, KC_3
    ),

    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,
        _______,_______,_______, KC_UP  ,_______ ,_______,
        _______,_______,KC_LEFT, KC_DOWN,KC_RGHT ,_______,
        _______,_______,RGB_TOG, UG_NEXT,_______ ,_______,
        _______,_______,_______,_______ ,_______,
                                KC_BTN1 , KC_LCTL, TO(0)
    ),

    [2] = LAYOUT(
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,
                                _______,_______, TO(0)
    ),

    [3] = LAYOUT(
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        KC_CAPS,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,
                                _______,_______,_______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [1] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [2] = { ENCODER_CCW_CW(UG_VALD, UG_VALU)},
    [3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT)},
};

#endif

/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(_QWERTY, _RAISE, _LOWER, _ADJUST);
}
*/

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);
const char *read_rgb_info(void);

const char *read_mode_icon(bool swap);
const char *read_host_led_state(void);
void set_timelog(void);
const char *read_timelog(void);

bool oled_task_user() {
    //rgblight_get_mode(led_state_reader(), false);
    led_t led_state = host_keyboard_led_state();
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    //oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(led_state.caps_lock ? PSTR("Caps Lock On") : PSTR("Caps Lock Off"), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);

    // Host Keyboard LED Status
    //led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(read_rgb_info(), false);
    //rgblight_get_mode(led_state_reader(), false);

    return false;
    }

#endif // OLED_ENABLE

