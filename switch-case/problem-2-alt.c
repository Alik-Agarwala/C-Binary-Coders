#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number); // input

    int check1, check2; // just to check the remainders

    check1 = number % 3; // remainder for 3
    check2 = number % 5; // remainder for 5

    switch (check1) // rem for 3 checking
    {
    case 0:
        printf("SUCCESS!\n");
        return 0; // to terminate the program
    }

    switch (check2)
    {
    case 0:
        printf("SUCCESS!\n");
        break;

    default:
        printf("OOPS!");
    }

    return 0;
}