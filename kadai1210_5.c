// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int num = 0;
    for (int i = 1; i <= 10; i++)
    {
        num += (i * (i + 1) * (i + 2)) / 6;
    }
    printf("計算結果: %d\n", num);
    return 0;
}
