#include <stdio.h>
int main()
{
    int N, v, sum;
    printf("Enter Number:\n");
    scanf("%d", &N);
    sum = 0;
    for (v = 1; v <= N; (v = (v + 1)))
    {
        sum = (sum + ((2 * v) - 1));
    }
    printf("sum is:%d", sum);
    return 0;
}