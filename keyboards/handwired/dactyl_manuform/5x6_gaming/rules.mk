# Build Options
# change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes		# Enable Encoder Features
ENCODER_MAP_ENABLE = yes  	# Encoder Map
OLED_ENABLE = yes			# Enable OLED Display
LTO_ENABLE = no 			# Optimise
VIA_ENABLE = yes			# VIA Usage
WS2812_DRIVER_REQUIRED = yes

WS2812_DRIVER = vendor
BOARD = GENERIC_RP_RP2040
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

# If you want to change the display of OLED, you need to change here
 SRC += ./lib/layer_state_reader.c \
		./lib/keylogger.c \
        ./lib/logo_reader.c \
        ./lib/mode_icon_reader.c \
		./lib/rgb_state_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \

