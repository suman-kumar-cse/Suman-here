#include<stdio.h>
int main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    
    float d = (3.14*r*r);
    printf("The area of the circle is:%f",d);
    return 0;
    
}