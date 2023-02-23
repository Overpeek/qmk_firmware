#include "action.h"
#include "matrix.h"
#include "send_string_keycodes.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0, default layer
  __________________________________________________________________________________________________________________________________   ________
  |        |        |        |        |        |        |        |        |        |        |        |        |        |            | |        |
  |  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |  ESC       | |  HOME  |
  |________|________|________|________|________|________|________|________|________|________|________|________|________|____________| |________|
  |        |        |        |        |        |        |        |        |        |        |        |        |        |            | |        |
  |  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | DELETE     | |  PGUP  |
  |________|________|________|________|________|________|________|________|________|________|________|________|________|____________| |________|
  |            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        | |        |
  |     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ | |  PGDN  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|________|________| |________|
    |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |    |        |
    |    CAPS    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |    |  END   |
    |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___ |________|
    |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |
    |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |
    |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
    |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
    |    CTRL    |  LGUI  | LALT  |   L4   |    SPACE        |    BACKSPACE    | RCTRL  |  RALT  |     F24     |   |  LEFT  |  DOWN  | RIGHT  |
    |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
  */

    [0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_ESC, KC_HOME, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_DEL, KC_PGUP, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_END, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, MO(3), KC_SPC, KC_BSPC, KC_RCTL, KC_RALT, KC_F24, KC_LEFT, KC_DOWN, KC_RGHT),

    [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    /* Layer 4, function layer
__________________________________________________________________________________________________________________________________   ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            | |        |
| RESET  | F13    | F14    | F15    | F16    | F17    | F18    | F19    | F20    | F21    | F22    | F23    | F24    |   INSERT   | |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________| |________|
|        |        |        |        |        |        |        |        |        |        |  LED   |  LED   |  LED   |            | |        |
|        | TO L1  | TO L2  | TO L3  | TO L4  |        |        |        |        |        | TOGGLE |  DOWN  |  UP    |   INSERT   | |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________| |________|
|   PRTSC    |        |        |        | SCROLL |        |        |        |        |        |        |        |        |        | |        |
|   SYSRQ    |  LMB   |  MMU   |  RMB   |   UP   |        |        |        |        |        |        |        |        |        | |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________| |________|
  |            |        |        |        | SCROLL |        |        |        |        |        |        |        |    PLAY    |    |        |
  |            |  MML   |  MMD   |  MMR   |  DOWN  |        |        |        |        |        |        |        |    PAUSE   |    |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___ |________|
  |                |        |        |        |        |        |        |        |        |        |        |            |  VOL   |
  |                |        |        |        |        |        |        |        |        |        |        |            |  UP    |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |  PREV  |  VOL   |  NEXT  |
  |            |        |       |        |   PAUSE/BREAK   |                 |        |        |             |   |  TRACK |  DOWN  |  TRACK |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|

* 'RESET' resets the controller and puts the board into firmware flashing mode. If this key is hit accidentally, just unplug the board
*        and plug it back in.
*/

    [3] = LAYOUT(RESET, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_INS, KC_TRNS, KC_TRNS, TO(0), TO(1), TO(2), TO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_VAD, RGB_VAI, KC_INS, KC_TRNS, KC_PSCR, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT),
};

bool f24_held   = false;
bool shift_held = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_F24:
            f24_held = record->event.pressed;
            break;
        case KC_LSFT:
            shift_held = record->event.pressed;
            break;
    }

    if (!f24_held || !record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case KC_A:
            if (!shift_held) {
                SEND_STRING(SS_TAP(X_RALT) "\"a");
            } else {
                SEND_STRING(SS_TAP(X_RALT) "\"A");
            }
            break;
        case KC_O:
            if (!shift_held) {
                SEND_STRING(SS_TAP(X_RALT) "\"o");
            } else {
                SEND_STRING(SS_TAP(X_RALT) "\"O");
            }
            break;
        case KC_E:
            SEND_STRING(SS_TAP(X_RALT) "e=");
            break;
        case KC_F1:
            SEND_STRING("tL" SS_TAP(X_RALT) "\"aski!" SS_TAP(X_ENTER));
            break;
        case KC_F2:
            SEND_STRING("tWhat a Sardino!" SS_TAP(X_ENTER));
            break;
            /*
            case KC_1:
                // windows bluescreen macro ;)
                SEND_STRING(SS_LGUI("x") SS_DELAY(1) "a" SS_DELAY(400) SS_TAP(X_LEFT) SS_TAP(X_ENTER) SS_DELAY(1000) "wininit" SS_TAP(X_ENTER));
                break;
            case KC_2:
                // windows rickroll
                SEND_STRING(SS_LGUI("x") SS_DELAY(1) "a" SS_DELAY(400) SS_TAP(X_LEFT) SS_TAP(X_ENTER) SS_DELAY(1000) "start-process https://youtu.be/dQw4w9WgXcQ" SS_TAP(X_ENTER));
                break;
            */
    }

    return false;
}
