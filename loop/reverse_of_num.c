#include <stdio.h>
int main()
{
    int N, r, rev;
    printf("Enter num:");
    scanf("%d", &N);
    rev = 0;
    while (N > 0)
    {
        r = N % 10;
        rev = ((rev * 10) + r);
        N = N / 10;
    }
    printf("reverse is: %d", rev);

    return 0;
}