// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float sum = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int num = rand() % 100 + 1;
        printf("%d\n", num);
        sum += num;
    }
    printf("5つの乱数の平均 : %.1f\n", sum / 5);
    return 0;
}
