#include <stdio.h>
int main()
{
    int N, r, rev, x;
    printf("Enter num:");
    scanf("%d", &N);

    rev = 0;
    x = N;

    while (N > 0)
    {
        r = (N % 10);
        rev = ((rev * 10) + r);
        N = (N / 10);
    }

    if (rev == x)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }

    return 0;
}