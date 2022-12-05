#include <gb/gb.h>
#include <stdio.h>
#include "include/hUGEDriver.h"

void main()
{
    extern const hUGESong_t song;
    hUGE_init(&song);
    while (1)
    {
        hUGE_dosound;
        printf("Hello World");
    }
}