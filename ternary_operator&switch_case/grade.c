#include <stdio.h>
int main()
{
    int a, b, c, d, e, x;

    printf("Enter all five nums:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    x = ((a + b + c + d + e) / 5.0);
    printf("your percentage is:%d", x);

    switch (x)
    {
    case (>= 90):
        printf("A") break;

    default:
        printf("Chose only 1to4");
    }
    printf("result:%.2f", R);
    return 1;
}