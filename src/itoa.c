/*
 * itoa.c
 *
 * itoa()
 * ==========
 *
 * Author   :  
 * Created  :  Sat Nov  2 11:50:12 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "itoa.h"
#include "reverse.h"

int itoa(char *dst, int src) {
    int   len;
    int   sign        = src;
    _Bool is_negative = sign < 0;

    if (is_negative) {
        len = 1;
        src = -src;
        dst[0] = '-';
        dst++;
    } else {
        len = 0;
    }

    do {
        dst[len++] = (char) (src % 10 + '0');
    } while ((src /= 10) > 0);

    reverse((size_t) len, dst);

    return len;
}
