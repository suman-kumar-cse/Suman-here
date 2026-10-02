#include <stdio.h>
int main()
{
    int N, v, p;
    printf("Enter Number:\n");
    scanf("%d", &N);
    v = 1;
    p = 1;
    while (v <= N)
    {
        p = (p * v);
        v = (v + 1);
    }
    printf("product is:%d", p);
    return 0;
}