#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your all five sub num.\n");
    printf("\nEnter 1st  number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd number: ");
    scanf("%d",&b);
    printf("\nEnter 3rd number: ");
    scanf("%d",&c);
    printf("\nEnter 4th number: ");
    scanf("%d",&d);
    printf("\nEnter 5th number: ");
    scanf("%d",&e);
    
    int x = (a+b+c+d+e);
    printf("\nSum is:%d\n",x);
    float z = (x/5.0);
    printf("\npercentage is:%.2f\n",z);
   
    return 0;
}