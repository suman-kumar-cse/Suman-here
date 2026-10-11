#include <stdio.h>
int main()
{
    int N, r, max;
    printf("Enter num:");
    scanf("%d", &N);

    max = 0;
    while (N > 0)
    {
        r = (N % 10);
        if (r > max)
        {
            max = r;
        }
        N = (N / 10);
    }
    printf("Max digit in num is: %d", max);

    return 0;
}