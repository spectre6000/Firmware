#ifndef CONFIG_H
#define CONFIG_H


/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBEE0
#define DEVICE_VER      0x0202
#define MANUFACTURER    t.m.k.
#define PRODUCT         Macway mod

/* message strings */
#define DESCRIPTION     t.m.k. keyboard firmware for Macway mod

/* matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 8

/* define if matrix has ghost */
#define MATRIX_HAS_GHOST

/* Set 0 if need no debouncing */
#define DEBOUNCE    5

/* legacy keymap support */
#define USE_LEGACY_KEYMAP

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_LCTRL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LGUI)) || \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* PS/2 mouse */
#ifdef PS2_MOUSE_ENABLE
#   define PS2_CLOCK_PORT  PORTF
#   define PS2_CLOCK_PIN   PINF
#   define PS2_CLOCK_DDR   DDRF
#   define PS2_CLOCK_BIT   0
#   define PS2_DATA_PORT   PORTF
#   define PS2_DATA_PIN    PINF
#   define PS2_DATA_DDR    DDRF
#   define PS2_DATA_BIT    1
#endif

#endif
