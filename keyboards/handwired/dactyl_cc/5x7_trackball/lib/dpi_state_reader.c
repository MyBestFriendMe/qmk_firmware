#include <stdio.h>
#include <inttypes.h>
#include "pointing_device.h"

char dpi_state_str[12];

const char *read_cpi_str(void) {

    snprintf(dpi_state_str, sizeof(dpi_state_str), "DPI: %u",
    (pointing_device_get_cpi()));
  return dpi_state_str;
}
