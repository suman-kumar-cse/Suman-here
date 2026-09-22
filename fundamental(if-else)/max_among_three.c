#include<stdio.h>
int main()
{
    int a,b,c,m;
    printf("Enter three Numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    
     m=b;

    if (m<a)
    {
        m=a;
    }
    if (m<c)
    {
      m=c;  
    }
     printf("max among three is: %d",m);
    return (0);

}