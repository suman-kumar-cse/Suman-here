#include <stdio.h>
int main()
{
    int N, sqrt, i;
    printf("Enter num:");
    scanf("%d", &N);
    if (N < 1)
    {
        printf("factor can't calculate");
        return 0;
    }
    sqrt = 1;
    do
    {
        sqrt = (sqrt + 1);
    } while ((sqrt * sqrt) < N);
    printf("factor is 1 \n");

    if (N != 1)
    {
        printf("factor is %d\n", N);
    }
    i = 2;
    do
    {
        if ((N % i) == 0)
        {
            printf("factor is %d\n", i);
            if (i != (N / i))
            {
                printf("factor is %d\n", (N / i));
            }
        }
        i = (i + 1);
    } while (i <= sqrt);
    return 1;
}