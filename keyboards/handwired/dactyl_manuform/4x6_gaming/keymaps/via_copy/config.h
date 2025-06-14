
#undef ENCODER_A_PINS
#undef ENCODER_B_PINS

#define ENCODER_A_PINS { F4 }
#define ENCODER_B_PINS { F5 }
#define ENCODER_RESOLUTION { 4 }

#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    undef  RGBLIGHT_EFFECT_STATIC_GRADIENT
#    undef  RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
#    define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
#    define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
#    undef  RGBLIGHT_SLEEP      //  the RGB lighting will be switched off when the host goes to sleep
#endif

