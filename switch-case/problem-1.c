#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:

    case 9:
        printf("A\n");
        break;

    case 8:
        printf("B\n");
        break;

    case 7:
        printf("C\n");
        break;

    case 6:
        printf("D\n");
        break;

    default:
        printf("Fail\n");
    }

    return 0;
}