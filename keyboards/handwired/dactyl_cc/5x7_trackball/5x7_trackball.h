#pragma once

#include "quantum.h"

typedef union {
    uint32_t raw;
    struct {
        uint8_t dpi_config;
    };
} keyboard_config_t;

extern keyboard_config_t keyboard_config;
extern uint16_t          dpi_array[];

enum custom_keycodes {
    DRAG_SCROLL = QK_KB_0,
    DPI_CONFIG,
    DPI_UP,
    DPI_DN,
};

void toggle_drag_scroll(void);
void cycle_dpi(void);
