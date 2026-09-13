#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
 printf("interchanged value of a=%d\n",a);
 printf("interchanged value of b=%d\n",b);
    return 0;
}