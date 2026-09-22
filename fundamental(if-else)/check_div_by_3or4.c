#include <stdio.h>

int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x%3 == 0)
    {
        printf("\nNumber is divisible by 3");
    }
    else
    {
        printf("\nNot divisible by 3");
        
    }
    if (x%5 == 0)
    {
        printf("\nDivisible by 5");
    }
    else
    {
        printf("\nNot divisible by 5");
    }
    return 0;
}