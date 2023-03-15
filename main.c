/**
 * @file main.c
 * @author Riccardo Iacob
 * @brief Test routines for CUtils. This file will change whitout any notice, and shall be intended for the author only.
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
#include "bit_macros.h"

int main(void) {
    int a = 0;
    printf("a:%d\n",a);
    BIT_SET(1UL,a,0);
    printf("a:%d\n",a);
    return 0;
}