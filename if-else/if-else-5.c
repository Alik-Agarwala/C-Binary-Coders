#include <stdio.h>

int main()
{
    if (1) // always true
        printf("if(1) is always true\n");
    else
        printf("This block will not be executed\n");

    if (0) // always false
        printf("This block will not be executed\n");
    else
        printf("if(0) is always false\n");

    if (239) // always true
        printf("if(non-zero) is always true\n");
    else
        printf("This block will not be executed\n");
    
    return 0;
}