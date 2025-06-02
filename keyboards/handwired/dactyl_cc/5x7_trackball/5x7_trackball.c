#include "5x7_trackball.h"

#ifndef DPI_OPTIONS
#    define DPI_OPTIONS \
        { 600, 900, 1200, 1600, 2400, 10000 }
#    ifndef DPI_DEFAULT
#        define DPI_DEFAULT 3
#    endif
#endif

#ifndef DPI_DEFAULT
#    define DPI_DEFAULT 0
#endif

keyboard_config_t keyboard_config;
uint16_t          dpi_array[] = DPI_OPTIONS;
#define DPI_OPTION_SIZE ARRAY_SIZE(dpi_array)

void cycle_dpi(void) {
    keyboard_config.dpi_config = (keyboard_config.dpi_config + 1) % DPI_OPTION_SIZE;
    eeconfig_update_kb(keyboard_config.raw);
    pointing_device_set_cpi(dpi_array[keyboard_config.dpi_config]);
}
/*
void press_dpi_up(void) {
    keyboard_config.dpi_config = (keyboard_config.dpi_config + 1) % DPI_OPTION_SIZE;
    eeconfig_update_kb(keyboard_config.raw);
    pointing_device_set_cpi(dpi_array[keyboard_config.dpi_config]);
}

void press_dpi_dn(void) {

}

*/

bool process_record_kb(uint16_t keycode, keyrecord_t* record) {

    if (!process_record_user(keycode, record)) {
        return false;
    }

    if (keycode == DPI_CONFIG && record->event.pressed) {
        cycle_dpi();
    }

    return true;
}

void pointing_device_init_kb(void) {
    keyboard_config.raw = eeconfig_read_kb();
    if (keyboard_config.dpi_config > DPI_OPTION_SIZE) {
        eeconfig_init_kb();
    }
    pointing_device_set_cpi(dpi_array[keyboard_config.dpi_config]);
}

void eeconfig_init_kb(void) {
    keyboard_config.dpi_config = DPI_DEFAULT;
    eeconfig_update_kb(keyboard_config.raw);
    eeconfig_init_user();
}
