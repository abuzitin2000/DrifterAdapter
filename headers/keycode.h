#ifndef KEYCODE_H_Q7IBG6HZ
#define KEYCODE_H_Q7IBG6HZ

#define KC_ENT KC_ENTER
#define KC_ESC KC_ESCAPE
#define KC_BSPC KC_BSPACE
#define KC_SPC KC_SPACE
#define KC_MINS KC_MINUS
#define KC_EQL KC_EQUAL
#define KC_LBRC KC_LBRACKET
#define KC_RBRC KC_RBRACKET
#define KC_BSLS KC_BSLASH
#define KC_NUHS KC_NONUS_HASH
#define KC_SCLN KC_SCOLON
#define KC_QUOT KC_QUOTE
#define KC_GRV KC_GRAVE
#define KC_COMM KC_COMMA
#define KC_SLSH KC_SLASH
#define KC_NUBS KC_NONUS_BSLASH

/* Lock Keys */
#define KC_CLCK KC_CAPSLOCK
#define KC_CAPS KC_CAPSLOCK
#define KC_SLCK KC_SCROLLLOCK
#define KC_NLCK KC_NUMLOCK
#define KC_LCAP KC_LOCKING_CAPS
#define KC_LNUM KC_LOCKING_NUM
#define KC_LSCR KC_LOCKING_SCROLL

/* Commands */
#define KC_PSCR KC_PSCREEN
#define KC_PAUS KC_PAUSE
#define KC_BRK KC_PAUSE
#define KC_INS KC_INSERT
#define KC_DEL KC_DELETE
#define KC_PGDN KC_PGDOWN
#define KC_RGHT KC_RIGHT
#define KC_APP KC_APPLICATION
#define KC_EXEC KC_EXECUTE
#define KC_SLCT KC_SELECT
#define KC_AGIN KC_AGAIN
#define KC_PSTE KC_PASTE
#define KC_ERAS KC_ALT_ERASE
#define KC_CLR KC_CLEAR

/* Keypad */
#define KC_PSLS KC_KP_SLASH
#define KC_PAST KC_KP_ASTERISK
#define KC_PMNS KC_KP_MINUS
#define KC_PPLS KC_KP_PLUS
#define KC_PENT KC_KP_ENTER
#define KC_P1 KC_KP_1
#define KC_P2 KC_KP_2
#define KC_P3 KC_KP_3
#define KC_P4 KC_KP_4
#define KC_P5 KC_KP_5
#define KC_P6 KC_KP_6
#define KC_P7 KC_KP_7
#define KC_P8 KC_KP_8
#define KC_P9 KC_KP_9
#define KC_P0 KC_KP_0
#define KC_PDOT KC_KP_DOT
#define KC_PEQL KC_KP_EQUAL
#define KC_PCMM KC_KP_COMMA

/* Japanese specific */
#define KC_ZKHK KC_GRAVE
#define KC_RO KC_INT1
#define KC_KANA KC_INT2
#define KC_JYEN KC_INT3
#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5

/* Korean specific */
#define KC_HAEN KC_LANG1
#define KC_HANJ KC_LANG2

/* Modifiers */
#define KC_LCTL KC_LCTRL
#define KC_LSFT KC_LSHIFT
#define KC_LOPT KC_LALT
#define KC_LCMD KC_LGUI
#define KC_LWIN KC_LGUI
#define KC_RCTL KC_RCTRL
#define KC_RSFT KC_RSHIFT
#define KC_ALGR KC_RALT
#define KC_ROPT KC_RALT
#define KC_RCMD KC_RGUI
#define KC_RWIN KC_RGUI

/* Generic Desktop Page (0x01) */
#define KC_PWR KC_SYSTEM_POWER
#define KC_SLEP KC_SYSTEM_SLEEP
#define KC_WAKE KC_SYSTEM_WAKE

/* Consumer Page (0x0C) */
#define KC_MUTE KC_AUDIO_MUTE
#define KC_VOLU KC_AUDIO_VOL_UP
#define KC_VOLD KC_AUDIO_VOL_DOWN
#define KC_MNXT KC_MEDIA_NEXT_TRACK
#define KC_MPRV KC_MEDIA_PREV_TRACK
#define KC_MSTP KC_MEDIA_STOP
#define KC_MPLY KC_MEDIA_PLAY_PAUSE
#define KC_MSEL KC_MEDIA_SELECT
#define KC_EJCT KC_MEDIA_EJECT
#define KC_CALC KC_CALCULATOR
#define KC_MYCM KC_MY_COMPUTER
#define KC_WSCH KC_WWW_SEARCH
#define KC_WHOM KC_WWW_HOME
#define KC_WBAK KC_WWW_BACK
#define KC_WFWD KC_WWW_FORWARD
#define KC_WSTP KC_WWW_STOP
#define KC_WREF KC_WWW_REFRESH
#define KC_WFAV KC_WWW_FAVORITES
#define KC_MFFD KC_MEDIA_FAST_FORWARD
#define KC_MRWD KC_MEDIA_REWIND
#define KC_BRIU KC_BRIGHTNESS_UP
#define KC_BRID KC_BRIGHTNESS_DOWN

/* System Specific */
#define KC_BRMU KC_PAUSE
#define KC_BRMD KC_SCROLLLOCK

/* Mouse Keys */
#define KC_MS_U KC_MS_UP
#define KC_MS_D KC_MS_DOWN
#define KC_MS_L KC_MS_LEFT
#define KC_MS_R KC_MS_RIGHT
#define KC_BTN1 KC_MS_BTN1
#define KC_BTN2 KC_MS_BTN2
#define KC_BTN3 KC_MS_BTN3
#define KC_BTN4 KC_MS_BTN4
#define KC_BTN5 KC_MS_BTN5
#define KC_BTN6 KC_MS_BTN6
#define KC_BTN7 KC_MS_BTN7
#define KC_BTN8 KC_MS_BTN8
#define KC_WH_U KC_MS_WH_UP
#define KC_WH_D KC_MS_WH_DOWN
#define KC_WH_L KC_MS_WH_LEFT
#define KC_WH_R KC_MS_WH_RIGHT
#define KC_ACL0 KC_MS_ACCEL0
#define KC_ACL1 KC_MS_ACCEL1
#define KC_ACL2 KC_MS_ACCEL2

enum hid_keyboard_keypad_usage {
    KC_NO = 0x00,
    KC_ROLL_OVER,
    KC_POST_FAIL,
    KC_UNDEFINED,
    KC_A,
    KC_B,
    KC_C,
    KC_D,
    KC_E,
    KC_F,
    KC_G,
    KC_H,
    KC_I,
    KC_J,
    KC_K,
    KC_L,
    KC_M,  // 0x10
    KC_N,
    KC_O,
    KC_P,
    KC_Q,
    KC_R,
    KC_S,
    KC_T,
    KC_U,
    KC_V,
    KC_W,
    KC_X,
    KC_Y,
    KC_Z,
    KC_1,
    KC_2,
    KC_3,  // 0x20
    KC_4,
    KC_5,
    KC_6,
    KC_7,
    KC_8,
    KC_9,
    KC_0,
    KC_ENTER,
    KC_ESCAPE,
    KC_BSPACE,
    KC_TAB,
    KC_SPACE,
    KC_MINUS,
    KC_EQUAL,
    KC_LBRACKET,
    KC_RBRACKET,  // 0x30
    KC_BSLASH,
    KC_NONUS_HASH,
    KC_SCOLON,
    KC_QUOTE,
    KC_GRAVE,
    KC_COMMA,
    KC_DOT,
    KC_SLASH,
    KC_CAPSLOCK,
    KC_F1,
    KC_F2,
    KC_F3,
    KC_F4,
    KC_F5,
    KC_F6,
    KC_F7,  // 0x40
    KC_F8,
    KC_F9,
    KC_F10,
    KC_F11,
    KC_F12,
    KC_PSCREEN,
    KC_SCROLLLOCK,
    KC_PAUSE,
    KC_INSERT,
    KC_HOME,
    KC_PGUP,
    KC_DELETE,
    KC_END,
    KC_PGDOWN,
    KC_RIGHT,
    KC_LEFT,  // 0x50
    KC_DOWN,
    KC_UP,
    KC_NUMLOCK,
    KC_KP_SLASH,
    KC_KP_ASTERISK,
    KC_KP_MINUS,
    KC_KP_PLUS,
    KC_KP_ENTER,
    KC_KP_1,
    KC_KP_2,
    KC_KP_3,
    KC_KP_4,
    KC_KP_5,
    KC_KP_6,
    KC_KP_7,
    KC_KP_8,  // 0x60
    KC_KP_9,
    KC_KP_0,
    KC_KP_DOT,
    KC_NONUS_BSLASH,
    KC_APPLICATION,
    KC_POWER,
    KC_KP_EQUAL,
    KC_F13,
    KC_F14,
    KC_F15,
    KC_F16,
    KC_F17,
    KC_F18,
    KC_F19,
    KC_F20,
    KC_F21,  // 0x70
    KC_F22,
    KC_F23,
    KC_F24,
    KC_EXECUTE,
    KC_HELP,
    KC_MENU,
    KC_SELECT,
    KC_STOP,
    KC_AGAIN,
    KC_UNDO,
    KC_CUT,
    KC_COPY,
    KC_PASTE,
    KC_FIND,
    KC__MUTE,
    KC__VOLUP,  // 0x80
    KC__VOLDOWN,
    KC_LOCKING_CAPS,
    KC_LOCKING_NUM,
    KC_LOCKING_SCROLL,
    KC_KP_COMMA,
    KC_KP_EQUAL_AS400,
    KC_INT1,
    KC_INT2,
    KC_INT3,
    KC_INT4,
    KC_INT5,
    KC_INT6,
    KC_INT7,
    KC_INT8,
    KC_INT9,
    KC_LANG1,  // 0x90
    KC_LANG2,
    KC_LANG3,
    KC_LANG4,
    KC_LANG5,
    KC_LANG6,
    KC_LANG7,
    KC_LANG8,
    KC_LANG9,
    KC_ALT_ERASE,
    KC_SYSREQ,
    KC_CANCEL,
    KC_CLEAR,
    KC_PRIOR,
    KC_RETURN,
    KC_SEPARATOR,
    KC_OUT,  // 0xA0
    KC_OPER,
    KC_CLEAR_AGAIN,
    KC_CRSEL,
    KC_EXSEL,

    /* Modifiers */
    KC_LCTRL = 0xE0,
    KC_LSHIFT,
    KC_LALT,
    KC_LGUI,
    KC_RCTRL,
    KC_RSHIFT,
    KC_RALT,
    KC_RGUI
};

#endif