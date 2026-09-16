#include <stdio.h>
int main()
{
    int a,b,Ch;
    float R;

    printf("Enter the first operand:");
    scanf("%d",&a);
    printf("Enter the second operand:");
    scanf("%d",&b);
    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div \n");
    printf("\nEnter your choice:\n");
    scanf("%d",&Ch);
    
    if(Ch==1)
    {
        R=(a+b);
    }
    if(Ch==2)
    {
        R=(a-b);
    }
    if(Ch==3)
    {
        R=(a*b);
    }
    if(Ch==4){
        if(b!=0)
        {
            R=((a+0.0)/b);
        }
        else
        {
            printf("In division by zero undefined");
            return(0);
        }
    }
    printf("Result=%f",R);
    return(1);
}