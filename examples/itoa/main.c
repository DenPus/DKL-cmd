/*
 * main.c
 *
 * Example itoa()
 * ===============
 *
 * Author   :  
 * Created  :  Sat Nov  2 11:50:12 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include <dkl-cmd.h>

int _start(void) {
    int  err = 0;
    char src[11];
    int  len = itoa(src, 789760);

    src[len]       = '\0';

    char long_src[21];
    int  long_nsrc = aofi(long_src, 18, 10);

    long_src[long_nsrc] = '\0';

    /*printf("%.*s --- %.*s", len, src, long_nsrc, long_src);*/

    return err;
}
