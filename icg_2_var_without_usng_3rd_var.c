#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    a=(a+b);
    b=(a-b);
    a=(a-b);
 printf("interchanged value of a=%d\n",a);
 printf("interchanged value of b=%d\n",b);
    return 0;
}