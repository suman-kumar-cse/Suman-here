#include <stdio.h>
int main()
{
    int a, b, x;
    float R;

    printf("Enter the first operand:");
    scanf("%d", &a);
    printf("Enter the second operand:");
    scanf("%d", &b);
    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div \n");
    printf("\nEnter your choice:\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        R = (a + b);
        break;
    case 2:
        R = (a - b);
        break;
    case 3:
        R = (a * b);
        break;
    case 4:
        if (b != 0)
        {
            R = ((a + 0.00) / b);
        }
        else
        {
            printf("division by zero undefine");
            return 0;
        }
        break;
    default:
        printf("Chose only 1to4");
    }
    printf("result:%.2f", R);
    return 1;
}