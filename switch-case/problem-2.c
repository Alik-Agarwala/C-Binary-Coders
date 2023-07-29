#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int rem = ((n % 3) && (n % 5));

    switch (rem)
    {
    case 0:
        printf("Success\n");
        break;

    default:
        printf("OOPS\n");
    }

    return 0;
}