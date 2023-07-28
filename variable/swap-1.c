#include <stdio.h>

int main()
{
    int a = 5, b = 6;

    // swap
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("a = %d\n", b);

    return 0;
}