#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of sides or rectangle:  \n");
    scanf(" %f %f", &a, &b);
    float d = (a*b);
    printf("The area of the rectangle is:  " "%f",d);
    return 0;
    
}