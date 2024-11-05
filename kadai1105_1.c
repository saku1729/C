// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int x1, x2;
    int w1 = 1;
    int w2 = 1;
    double bias_and = 1.5;
    double bias_or = 0.5;
    printf("x1: ");
    scanf("%d", &x1);
    printf("x2: ");
    scanf("%d", &x2);
    double y_and = w1 * x1 + w2 * x2 - bias_and;
    double y_or = w1 * x1 + w2 * x2 - bias_or;
    if (y_and > 0)
    {
        printf("AND : y = 1\n");
    }
    else
    {
        printf("AND : y = 0\n");
    }
    if (y_or > 0)
    {
        printf("OR  : y = 1\n");
    }
    else
    {
        printf("OR  : y = 0\n");
    }
    return 0;
}
