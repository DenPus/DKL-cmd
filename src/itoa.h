/*
 * itoa.h
 *
 * itoa()
 * ==========
 *
 * Author   :  Denkar
 * Created  :  Sat Nov  2 11:50:12 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#pragma once

extern int aofl(char *dst, long src, int radix);

extern int aoful(char *dst, unsigned long src, int radix);

extern int aofi(char *dst, int src, int radix);

#define itoa(dst, src) aofi(dst, src, 10)

extern int aofui(char *dst, unsigned int src, int radix);
