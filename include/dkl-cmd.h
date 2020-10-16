/*
 * dkl-cmd.h
 *
 * Headers dkl-cmd
 * =============
 * Library - functions for console
 *
 * Author   :   denkar
 * Created  :   02.09.19 13:06
 * Homepage :   https://github.com/Denpus/DKL-cmd
 * License  :   GPL-2.0
 * Version  :   0.1.8
 *
 * Copyright (C) Denis Karabadjak <denkar>
 */

#pragma once

#define __DLIB__ 1

#ifndef __DLIB__

#include <stdio.h>
#include <stdarg.h>

extern int vfprintlnf(FILE *__restrict stream, const char *__restrict format,
                      va_list arg);

extern int sprintlnf(char *__restrict dst, const char *__restrict format, ...);

extern int
vsprintlnf(char *__restrict dst, const char *__restrict format, va_list arg);

extern int
fprintlnf(FILE *__restrict stream, const char *__restrict format, ...);

extern int printlnf(const char *__restrict format, ...);

#endif

extern int reverse(unsigned long nsrc, char *src);

extern int aofl(char *dst, long src, int radix);

extern int aoful(char *dst, unsigned long src, int radix);

extern int aofi(char *dst, int src, int radix);

#define itoa(dst, src) aofi(dst, src, 10)

extern int aofui(char *dst, unsigned int src, int radix);
