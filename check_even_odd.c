#include <stdio.h>

int main()
{
    int x;
    printf("Input a number to check Even or Odd: ");
    scanf("%d", &x);
    
    if ( x%2 == 0)
    {
        printf("The Number is Even ");
    }
    else
    {
        printf("The Number is Odd");
    }
    return 0;
}