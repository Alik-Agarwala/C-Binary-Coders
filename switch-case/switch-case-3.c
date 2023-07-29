#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    switch (marks)
    {
    case 10:
        printf("Fair\n");
        break;

    case 20:
        printf("good\n");
        break;

    case 30:
        printf("Excellent\n");
        break;

    default:
        printf("Try again!\n"); // if no cases are matched then default block will be executed
    }

    return 0;
}