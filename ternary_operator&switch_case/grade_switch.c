#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, per;

    printf("Enter Bengali marks:");
    scanf("%d", &a);
    printf("Enter English marks:");
    scanf("%d", &b);
    printf("Enter Mathematics marks:");
    scanf("%d", &c);
    printf("Enter Physics marks: ");
    scanf("%d", &d);
    printf("Enter Chemistry marks:");
    scanf("%d", &e);

    per = ((a + b + c + d + e) / 5);

    switch (per)
    {
    case 90 ... 100:
        printf("A Grade");
        break;

    case 80 ... 89:
        printf("B Grade");
        break;

    case 50 ... 79:
        printf("C Grade");
        break;

    case 0 ... 49:
        printf("Fail");
        break;
    }
    return (0);
}