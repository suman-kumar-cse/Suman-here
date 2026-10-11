#include <stdio.h>
int main()
{
    int N, v, sign, sum;
    printf("Enter num:");
    scanf("%d", &N);
    sign = 1;
    v = 1;
    sum = 0;
    while (v <= N)
    {
        sum = (sum + (v * sign));
        sign = (sign * (-1));
        v = (v + 1);
    }
    printf("sum is %d", sum);
    return 0;
}