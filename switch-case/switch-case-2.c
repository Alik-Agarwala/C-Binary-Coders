#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    switch (marks)
    {
    case 10:
        printf("Fail\n");

    case 20:
        printf("Fair\n");

    case 30:
        printf("Good\n");
        break;

    case 40:
        printf("Excellent\n");
        break;
    }

    return 0;
}