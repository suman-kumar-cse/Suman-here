#include <stdio.h>
int main()
{
    int a, b, c, d, e, x, z;
    printf("Enter all five numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    x = a; // let x is maxm.
    if (x < b)
    {
        x = b;
    }
    if (x < c)
    {
        x = c;
    }
    if (x < d)
    {
        x = d;
    }
    if (x < e)
    {
        x = e;
    }
    z = ((a + b + c + d + e) - x) / 4;
    printf("The average of the worst four numbers is: %d\n", z);
    return 0;
}