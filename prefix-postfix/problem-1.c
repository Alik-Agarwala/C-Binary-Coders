#include <stdio.h>

int main()
{
    int x = 5;

    int y = ++x; // x = 6, y = 6

    int z = x++; // x = 7, z = 6

    printf("Value of x is %d\n", x); // x = 7
    printf("Value of y is %d\n", y); // y = 6
    printf("Value of z is %d\n", z); // z = 6

    return 0;
}