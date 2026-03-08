// ╭─────────────────────────────────────────────╮
// │                 BASE layer                  │
// ╰─────────────────────────────────────────────╯

// Homerow mods
#define KC_SS LGUI_T(KC_S)
#define KC_DD LCTL_T(KC_D)
#define KC_FF LALT_T(KC_F)
#define KC_JJ LALT_T(KC_J)
#define KC_KK RCTL_T(KC_K)
#define KC_LL RGUI_T(KC_L)

// Thumb keys
#define SFT_BSP LSFT_T(KC_BSPC)
#define NAV_SPC LT(_VIMNAV, KC_SPC)
#define SYM_ENT LT(_SYMBOLS, KC_ENT)

// ╭─────────────────────────────────────────────╮
// │                VIMNAV layer                 │
// ╰─────────────────────────────────────────────╯

#define S_TAB   S(KC_TAB)
#define A_TAB   A(KC_TAB)
#define NEXT_WD C(KC_RGHT)
#define PREV_WD C(KC_LEFT)

#define NUMPAD MO(_NUMPAD)
#define FUNPAD MO(_FUNPAD)

// ╭─────────────────────────────────────────────╮
// │               SYMBOLS layer                 │
// ╰─────────────────────────────────────────────╯

#define NUMROW MO(_NUMROW)

// Ergo-L symbols layer

#define AG_Q    ALGR(KC_Q)
#define AG_W    ALGR(KC_W)
#define AG_E    ALGR(KC_E)
#define AG_R    ALGR(KC_R)
#define AG_T    ALGR(KC_T)
#define AG_Y    ALGR(KC_Y)
#define AG_U    ALGR(KC_U)
#define AG_I    ALGR(KC_I)
#define AG_O    ALGR(KC_O)
#define AG_P    ALGR(KC_P)

#define AG_A    ALGR(KC_A)
#define AG_S    ALGR(KC_S)
#define AG_D    ALGR(KC_D)
#define AG_F    ALGR(KC_F)
#define AG_G    ALGR(KC_G)
#define AG_H    ALGR(KC_H)
#define AG_J    ALGR(KC_J)
#define AG_K    ALGR(KC_K)
#define AG_L    ALGR(KC_L)
#define AG_SCLN ALGR(KC_SCLN)

#define AG_Z    ALGR(KC_Z)
#define AG_X    ALGR(KC_X)
#define AG_C    ALGR(KC_C)
#define AG_V    ALGR(KC_V)
#define AG_B    ALGR(KC_B)
#define AG_N    ALGR(KC_N)
#define AG_M    ALGR(KC_M)
#define AG_COMM ALGR(KC_COMM)
#define AG_DOT  ALGR(KC_DOT)
#define AG_SLSH ALGR(KC_SLSH)

#define AG_SPC  ALGR_T(KC_SPC)
