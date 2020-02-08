/*
 * println.h
 *
 * Author:   denkar
 * Created:  02.10.19 9:55
 */

#pragma once

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

