#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter length of rectangle: ");
    scanf("%f", &a);
     printf("Enter bredth of rectangle: ");
    scanf("%f", &b);
    float d = (a*b);
    printf("The area of the rectangle is:%f",d);
    return 0;
    
}