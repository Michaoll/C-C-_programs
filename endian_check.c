#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
//delaration of variables and pointers
    uint16_t variable=1;   // 1 to checking
    uint8_t *pointer;
    pointer=&variable;
    uint8_t *pointer_2 = pointer + 1;  //two pointers of for first 8 bits of uint16 variable and second for last 8 bits

    if(*pointer<*pointer_2)
    {
        printf("It is Big Endian");
    }
    else if(*pointer>*pointer_2)
    {
        printf("It is Small Endian");
    }
    else
    {
        printf("Error while entering the value to variable");
    }

    return 0;
}
