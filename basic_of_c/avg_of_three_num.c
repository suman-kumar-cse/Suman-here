#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Numbers:\n ");
    scanf ("%d %d %d", &a, &b, &c);
    float d;
    d=(a+b+c)/3;
    printf("The Avg is: " "%f", d);
    return (0);

}