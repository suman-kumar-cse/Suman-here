#include <stdio.h>
int main()
{
    int N, v, sum;
    printf("Enter Number:\n");
    scanf("%d", &N);
    v = 1;
    sum = 0;
    while (v <= N)
    {
        sum = (sum + v);
        v = (v + 1);
    }
    printf("sum is:%d", sum);
    return 0;
}