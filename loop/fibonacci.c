#include <stdio.h>
int main()
{
    int N, i, a, b, x;
    printf("Enter num:");
    scanf("%d", &N);

    a = 0;
    b = 1;
    printf("fibonacci is:\t");
    if (i >= 1)
    {
        printf("%d\t", a);
    }
    if (i >= 2)
    {
        printf("%d\t", b);
    }

    i = 3;
    while (i <= N)
    {
        x = (b + a);
        printf("%d\t", x);
        a = b;
        b = x;
        i = (i + 1);
    }

    return 0;
}