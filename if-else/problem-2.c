#include <stdio.h>

int main()
{
    int amount;

    scanf("%d", &amount);

    if (amount >= 5000)
    {
        if (amount >= 15000)
            printf("Maldives");
        else if (amount >= 10000)
            printf("Goa");
        else
            printf("Bad luck!");
    }
    else // amount < 5000
    {
        if (amount >= 3000)
            printf("Kolkata");
        else if (amount >= 1000)
            printf("Road trip");
        else
            printf("Bad luck!");
    }

    return 0;
}