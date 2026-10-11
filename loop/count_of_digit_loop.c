// count the digit
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter num:");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("digit count %d", count);
    return 0;
}