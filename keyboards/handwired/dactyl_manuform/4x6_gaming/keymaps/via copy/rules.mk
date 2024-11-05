LTO_ENABLE = yes            # Link Time Optimization enabled
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
OLED_ENABLE = yes           # OLED display
ENCODER_ENABLE = yes		# Rotary Encoder
ENCODER_MAP_ENABLE = yes    # Able to map Encoder
VIA_ENABLE = yes			# VIA Enabled

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/keylogger.c \
		./lib/host_led_state_reader.c \
		# ./lib/logo_reader.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/timelogger.c \
