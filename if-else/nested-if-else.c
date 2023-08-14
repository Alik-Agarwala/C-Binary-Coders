#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value for A, B, C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("A is largest");
        else
            printf("C is largest");
    }
    else
    {
        if (b > c)
            printf("B is largest");
        else
            printf("C is largest");
    }

    return 0;
}