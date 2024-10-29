// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i * i;
    }
    printf("sum = %d\n", sum);
    return 0;
}
