# MCU name
MCU = STM32F072

# Bootloader selection
BOOTLOADER = stm32-dfu
# Wildcard to allow APM32 MCU
DFU_SUFFIX_ARGS = -v FFFF -p FFFF

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes            # Enable N-key Rollover
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
BACKLIGHT_DRIVER = pwm
WS2812_DRIVER = pwm

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
