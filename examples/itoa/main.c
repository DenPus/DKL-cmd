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

int main(void) {
    int err = 0;
    char src[11];
    int len = itoa(src, 789760);

    src[len] = '\0';

    printf("%s", src);

    return err;
}
