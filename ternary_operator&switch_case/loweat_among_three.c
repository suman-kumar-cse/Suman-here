#include <stdio.h>
int main()
{
    int a, b, c, x, y;
    printf("Enter all three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    x = ((a < b) ? a : b);
    y = ((x < c) ? x : c);
    printf("lowest is: %d", y);
    return 0;
}