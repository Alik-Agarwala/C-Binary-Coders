#include <stdio.h>

int main()
{
    int marks = 10;

    switch (marks)
    {
    case 10:
                // will work similar as logical OR
    case 20:
        printf("Good\n");
        break;
    }
    
    return 0;
}