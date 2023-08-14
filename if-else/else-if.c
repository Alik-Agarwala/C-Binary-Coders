#include <stdio.h>

int main()
{
    int x = 10;

    if (x == 5)
        printf("x is 5");
    else if (x == 7)
        printf("x is 7");
    else if (x == 10) // true condition
        printf("x is 10");
    else
        printf("I don't know the value of x");

    return 0;
}