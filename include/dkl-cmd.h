/*
 * 
 * Author:   denkar
 * Created:  02.09.19 13:06
 *
 * Println - support functions: printlnf, fprintlnf, vfprintlnf, sprintlnf
 * and vsprintlnf
 */

#pragma once

#include <stdio.h>
#include <stdarg.h>

int vfprintlnf(FILE *__restrict stream, const char *__restrict format,
               va_list arg);

int sprintlnf(char *__restrict dst, const char *__restrict format, ...);

int
vsprintlnf(char *__restrict dst, const char *__restrict format, va_list arg);

int fprintlnf(FILE *__restrict stream, const char *__restrict format, ...);

int printlnf(const char *__restrict format, ...);
