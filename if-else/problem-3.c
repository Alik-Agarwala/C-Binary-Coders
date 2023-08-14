#include <stdio.h>

int main()
{
    int money = 6000, charge = 85;

    if (money > 5000 && charge > 80) // using logical AND
        printf("Go");
    else
        printf("Stay");

    return 0;
}