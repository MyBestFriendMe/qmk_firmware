

#pragma once

#ifdef ENCODER_ENABLE

#undef ENCODER_A_PINS
#undef ENCODER_B_PINS


#define ENCODER_A_PINS { GP1 }
#define ENCODER_B_PINS { GP2 }
#define ENCODER_RESOLUTION { 4 }

#endif


#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
#    define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
#    define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
#    define RGBLIGHT_SLEEP      //  the RGB lighting will be switched off when the host goes to sleep
#    define RGBLIGHT_LED_COUNT 24
#    define WS2812_DI_PIN GP0
#endif

//OLED Display I2C Configuration
#ifdef OLED_ENABLE

#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP27
#define I2C1_SDA_PIN GP26

#endif
