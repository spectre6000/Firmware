#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];

/* prototype keymap definition macro */
#define KEYMAP( \
    K00, K01, K02, \
    K10, K11, K12, \
    K20, K21, K22  \
) { \
    { KC_##K00, KC_##K01, KC_##K02, \
    { KC_##K10, KC_##K11, KC_##K12, \
    { KC_##K20, KC_##K21, KC_##K22  \
}

#endif
