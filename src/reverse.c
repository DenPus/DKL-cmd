/*
 * reverse.c
 *
 * reverse()
 * ==========
 *
 * Author   :  
 * Created  :  Sat Nov  2 11:30:13 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include "reverse.h"

int reverse(unsigned long nsrc, char *src) {
    int    err = 0;
    char   ch;
    unsigned long i   = nsrc - 1;
    unsigned long j   = 0;

    for (; i > j; i--, j++) {
        ch = src[i];

        src[i] = src[j];
        src[j] = ch;
    }

    return err;
}
