
#pragma once

#include_next <mcuconf.h>

#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE

#undef RP_PWM_USE_PWM7
#define RP_PWM_USE_PWM7 TRUE

#undef PR_I2C_USE_I2C1
#define PR_I2C_USE_I2C1 TRUE

#undef RP_SIO_USE_UART1
#define RP_SIO_USE_UART1 TRUE
