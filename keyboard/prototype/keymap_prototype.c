#include "keymap_common.h"

/*
 * Hasu
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Numbers
     * ,-----------.
     * |  1|  2|  3|
     * |-----------|
     * |  4|  5|  6|
     * |-----------|
     * |  7|  8| Fn|
     * `-----------'
     */
    KEYMAP(
        1,   2,   3, /
        4,   5,   6, /
        7,   8,   FN0),
    /* Keymap 1: Letters
     * ,-----------.
     * |  A|  B|  C|
     * |-----------|
     * |  D|  E|  F|
     * |-----------|
     * |  G|  H| Fn|
     * `-----------'
     */
    KEYMAP(
        A,   B,   C, \
        D,   E,   F, \
        G,   H,   FN1),
    /* Keymap 2: Special Characters
     * ,-----------.
     * |  -|  =|  \|
     * |-----------|
     * |  [|  ]|del|
     * |-----------|
     * |  "|  ,| Fn|
     * `-----------'
     */
    KEYMAP(
        MINS, EQL,BSLS, \
        LBRC,RBRC,BSPC, \
        QUOT,COMM, FN2),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_DEFAULT_LAYER_SET(1),  // set Numbers layout
    [1] = ACTION_DEFAULT_LAYER_SET(2),  // set Letters layout
    [2] = ACTION_DEFAULT_LAYER_SET(0),  // set Special Characters layout\
};
