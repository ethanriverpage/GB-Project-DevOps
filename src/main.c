#include <gb/gb.h>
#include <stdio.h>
#include "include/hUGEDriver.h"

extern const hUGESong_t song;

void main()
{
    NR52_REG = 0x80;
    NR51_REG = 0xFF;
    NR50_REG = 0x77;

    hUGE_init(&song);
    while (1)
    {
        hUGE_dosound;
        printf("Hello World");
    }
}