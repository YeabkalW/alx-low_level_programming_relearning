#include <stdio.h>

/**
 * @brief 
 * 
 */

int main (void)
{
    int a = 4, b = 3;
    a = a^b;
    b = a^b;
    a = a^b;

    printf("After XOR, a = %d and b = %d\n", a,b);

    return 0;
}