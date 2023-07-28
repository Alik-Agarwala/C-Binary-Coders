// THIS WILL CAUSE AN ERROR!

#include <stdio.h>

int main()
{
    int a = 2, b = 10;

    if (a > b)
    {
        printf("a is larger");
    }

    printf("Hello"); // this is breaking the sequence of if-else

    else
        printf("b is larger"); // for one statement, braces is not mandatory

    return 0;
}