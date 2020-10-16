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

static const char * const c_ls = "0123456789ABCDEF";

int aofui(char *dst, unsigned int src, int radix) {
    int len = 0;

    do {
        dst[len++] = c_ls[src % radix];
    } while ((src /= radix) > 0);
    reverse((unsigned long) len, dst);
    return len;
}

int aofi(char *dst, int src, int radix) {
    int len;

    if (src < 0 && radix == 10) {
        *dst++ = '-';
        len = 1 + aofui(dst, (unsigned int) -src, radix);
    } else {
        len = aofui(dst, (unsigned int) src, radix);
    }
    return len;
}

int aoful(char *dst, unsigned long src, int radix) {
    int len = 0;

    do {
        dst[len++] = c_ls[src % radix];
    } while ((src /= radix) > 0);
    reverse((unsigned long) len, dst);
    return len;
}

int aofl(char *dst, long src, int radix) {
    int len;

    if (src < 0 && radix == 10) {
        *dst++ = '-';
        len = 1 + aoful(dst, (unsigned long) -src, radix);
    } else {
        len = aoful(dst, (unsigned long) src, radix);
    }
    return len;
}
