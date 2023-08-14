#include <stdio.h>

int main()
{
    int ben = 95, kevin = 85, alen = 92;

    if (ben > 90 || kevin > 90 || alen > 90) // using logical OR
        printf("Yehh! Party!");
    else
        printf("Better luck next time!");

    return 0;
}