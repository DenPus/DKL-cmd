/*
 * 
 * Author:   denkar
 * Created:  02.09.19 14:03
 */

#include <dkl-cmd.h>

int main(void) {
    printlnf("Line 1");
    printlnf("Line %d next", 2);
    printlnf("Line %s", "3");
    fprintlnf(stdout, "Line %d", 4);

    char buf[50];

    sprintlnf(buf, "Line %d end", 5);

    printf(buf);

    return 0;
}
