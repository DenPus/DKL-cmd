/*
 * main.c
 *
 * Example reverse()
 * ===============
 *
 * Author   :  
 * Created  :  Sat Nov  2 11:30:13 2019
 *
 * Copyright (C) Denis Karabadjak <denkar@mail.ru>
 */

#include <dkl-cmd.h>

int main(void) {
    int err = 0;
    char src[13] = "Text reverse";

    reverse(sizeof(src) - 1, src);

    printf("%s", src);

    return err;
}
