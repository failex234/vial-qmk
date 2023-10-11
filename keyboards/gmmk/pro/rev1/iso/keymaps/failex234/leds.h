//
// Created by felix on 11.10.23.
//

#ifndef VIAL_QMK_LEDS_H
#define VIAL_QMK_LEDS_H

#define LED_ESC             0
#define LED_ZIRKUMFLEX      1
#define LED_TAB             2
#define LED_CAPS            3
#define LED_SHIFT_LEFT      4
#define LED_STRG_LEFT       5
#define LED_F1              6
#define LED_META_L          11
#define LED_F2              12
#define LED_ALT_L           17
#define LED_F3              18
#define LED_F4              23
#define LED_F5              28
#define LED_LEER            33
#define LED_F6              34
#define LED_F7              39
#define LED_F8              44
#define LED_ALT_GR          49
#define LED_F9              50
#define LED_FN              55
#define LED_F10             56
#define LED_F11             61
#define LED_STRG_RIGHT      65
#define LED_F12             66
#define LED_SIDE_LEFT_0     68
#define LED_SIDE_RIGHT_0    69
#define LED_DRUCK           70
#define LED_SIDE_LEFT_1     71
#define LED_SIDE_RIGHT_1    72
#define LED_ENTF            73
#define LED_SIDE_LEFT_2     74
#define LED_SIDE_RIGHT_2    75
#define LED_BILD_AUF        76
#define LED_SIDE_LEFT_3     77
#define LED_SIDE_RIGHT_3    78
#define LED_RECHTS          80
#define LED_SIDE_LEFT_4     81
#define LED_SIDE_RIGHT_4    82
#define LED_ENDE            83
#define LED_SIDE_LEFT_5     84
#define LED_SIDE_RIGHT_5    85
#define LED_BILD_AB         87
#define LED_SIDE_LEFT_6     88
#define LED_SIDE_RIGHT_6    89
#define LED_SIDE_LEFT_7     92
#define LED_SIDE_RIGHT_7    93
#define LED_LINKS           96
#define LED_RUNTER          98


static uint8_t left_side_leds[8] = {
    LED_SIDE_LEFT_0,
    LED_SIDE_LEFT_1,
    LED_SIDE_LEFT_2,
    LED_SIDE_LEFT_3,
    LED_SIDE_LEFT_4,
    LED_SIDE_LEFT_5,
    LED_SIDE_LEFT_6,
    LED_SIDE_LEFT_7
};

static uint8_t right_side_leds[8] = {
    LED_SIDE_RIGHT_0,
    LED_SIDE_RIGHT_1,
    LED_SIDE_RIGHT_2,
    LED_SIDE_RIGHT_3,
    LED_SIDE_RIGHT_4,
    LED_SIDE_RIGHT_5,
    LED_SIDE_RIGHT_6,
    LED_SIDE_RIGHT_7
};

static uint8_t border_leds[32] = {
    LED_ESC,
    LED_ZIRKUMFLEX,
    LED_TAB,
    LED_CAPS,
    LED_SHIFT_LEFT,
    LED_STRG_LEFT,
    LED_F1,
    LED_F2,
    LED_F3,
    LED_F4,
    LED_F5,
    LED_F6,
    LED_F7,
    LED_F8,
    LED_F9,
    LED_F10,
    LED_F11,
    LED_F12,
    LED_DRUCK,
    LED_META_L,
    LED_ALT_L,
    LED_LEER,
    LED_ALT_GR,
    LED_FN,
    LED_STRG_RIGHT,
    LED_LINKS,
    LED_RUNTER,
    LED_RECHTS,
    LED_ENDE,
    LED_BILD_AB,
    LED_BILD_AUF,
    LED_ENTF
};

#endif // VIAL_QMK_LEDS_H
