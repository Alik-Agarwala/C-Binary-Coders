#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    switch (marks)
    {
    case 10:
        printf("Fail\n");
        printf("Go and study\n");
        break;

    case 20:
        printf("Fair\n");
        printf("No video games!\n");
        break;

    case 30:
        printf("Good\n");
        break;

    case 40:
        printf("Excellent\n");
        break;

    // default block is not mandatory
    }

    return 0;
}