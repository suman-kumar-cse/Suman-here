#include <stdio.h>
int main()
{
    int x;
    printf("Enter num:\n");
    scanf("%d", &x);

    if ((x % 3) == 0)
    {
        if ((x % 5) == 0)
        {
            printf("Divisible by 3 and 5\n");
        }
    }
    else
    {
        printf("not divisible by 3 and 5\n");
    }

    return 0;
}