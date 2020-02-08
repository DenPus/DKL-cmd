/*
 * println.c
 *
 * Println
 * =======
 * Print standard function with line (add to last fmt "\n")
 * Support functions: printlnf, fprintlnf, vfprintlnf, sprintlnf and vsprintlnf
 *
 * Author   :  denkar
 * Created  :  02.09.19 14:58
 */

#include "println.h"
#ifndef __DLIB__
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

static int
_vprintlnf(char *dst, FILE *stream, const char *format, va_list arg) {
    int    done;
    size_t fmt_len = strlen(format);
    char   fmt[fmt_len + 2];

    memcpy(fmt, format, fmt_len);
    memcpy(fmt + fmt_len, "\n\0", 2);

    if (dst != NULL) {
        done = vsprintf(dst, fmt, arg);
    } else {
        done = vfprintf(stream, fmt, arg);
    }

    return done;
}

int vfprintlnf(FILE *stream, const char *format,
               va_list arg) {
    int done = _vprintlnf(NULL, stream, format, arg);

    return done;
}

int sprintlnf(char *dst, const char *format, ...) {
    va_list arg;
    int     done;

    va_start (arg, format);
    done = _vprintlnf(dst, NULL, format, arg);
    va_end (arg);

    return done;
}

int vsprintlnf(char *dst, const char *format, va_list arg) {
    int done = _vprintlnf(dst, NULL, format, arg);

    return done;
}

int fprintlnf(FILE *stream, const char *format, ...) {
    va_list arg;
    int     done;

    va_start (arg, format);
    done = vfprintlnf(stream, format, arg);
    va_end (arg);

    return done;
}

int printlnf(const char *format, ...) {
    va_list arg;
    int     done;

    va_start (arg, format);
    done = vfprintlnf(stdout, format, arg);
    va_end (arg);

    return done;
}
#endif
