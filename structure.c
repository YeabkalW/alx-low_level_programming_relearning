#include <stdio.h>

/**
 *  Structure 
 * is a user defined data type that can be used to group
 * elements of a different types into a single type.
 * 
 * we use the dot operator to assign the variables.
 * 
 */

struct 
{
    char *engine;
} car1, car2;

int main (void)
{
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa Dual VTVT";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);
    return 0;
}