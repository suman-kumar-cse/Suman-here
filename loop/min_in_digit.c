#include <stdio.h>
int main()
{
    int N, r, min;
    printf("Enter num:");
    scanf("%d", &N);

    min = 9;
    while (N > 0)
    {
        r = (N % 10);
        if (r < min)
        {
            min = r;
        }
        N = (N / 10);
    }
    printf("Min digit in num is: %d", min);

    return 0;
}