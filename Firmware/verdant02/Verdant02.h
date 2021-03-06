// Copyright 2022 Kreme
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K40, K01, K41, K02, K32, K03, K33, K04, K34, K05, K45, K06, K46, \
    K10, K50, K11, K51, K12, K42, K13, K43, K14, K44, K15, K55, K16, \
    K20, K60, K21, K61, K22, K52, K23, K53, K24, K54, K25, K65, K26, K56, \
    K30, K70, K31, K71, K62, K63, K73, K64, K35, K36, K75, K66, K76  \
) { \
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, K31, K32, K33, K34, K35, K36 }, \
    { K40, K41, K42, K43, K44, K45, K46 }, \
    { K50, K51, K52, K53, K54, K55, K56 }, \
    { K60, K61, K62, K63, K64, K65, K66 }, \
    { K70, K71, XXX, K73, XXX, K75, K76 }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
