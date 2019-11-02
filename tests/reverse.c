/*
 * reverse.c
 *
 * Test reverse()
 * ================
 *
 * Author   :  
 * Created  :  Sat Nov  2 11:30:13 2019
 */

#include "../src/reverse.c"
#include <dtest.h>

CASE(empty) {
    assert_eq(0, 0);
}

SUITE(empty);
