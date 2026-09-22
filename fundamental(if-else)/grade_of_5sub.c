#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float x;
    printf("Enter all five nums:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    x = ((a + b + c + d + e) / 5.0);
    printf("total percentage is: %.2f\n", x);

    if (x >= 90)
    {
        printf("A Grade!");
    }
    else if (x >= 80)
    {
        printf("B Grade!");
    }
    else if (x >= 70)
    {
        printf("C Grade!");
    }
    else if (x >= 60)
    {
        printf("D Grade!");
    }
    else if (x >= 50)
    {
        printf("E Grade!");
    }
    else if (x <= 50)
    {
        printf("/nFail!");
    }
    return 0;
}