#include <gb/gb.h>
#include <stdio.h>
#include "hUGEDriver.h"

void main()
{
    while (1)
    {
        extern const hUGESong_t song;
        hUGE_init(&song);
        printf("Hello World");
    }
}