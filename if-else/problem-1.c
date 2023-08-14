#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) // if remainder is zero then even
        printf("Even");
    else // if remainder is not zero then odd
        printf("Odd");

    return 0;
}