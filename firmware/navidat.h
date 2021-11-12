// Copyright 2021 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
    k00, k01, k10, \
    k20, k21, k11, \
                   \
         k31,      \
    k30, k40, k41  \
) { \
    { k00, k01 }, \
    { k10, k11 }, \
    { k20, k21 }, \
    { k30, k31 }, \
    { k40, k41 }  \
}
