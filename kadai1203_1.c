// AJG24028 徳永大悟
#include <stdio.h>
#define NUM 5
int convert(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int sum = 0;
    int ori[NUM];
    for (int i = 0; i < NUM; i++)
    {
        ori[i] = 0;
    }
    // t=1
    for (int i = 0; i < NUM; i++)
    {
        ori[i] = convert(ori[i]);
    }
    // t=2~2024
    for (int t = 2; t <= NUM; t++)
    {
        for (int i = 1; i <= t; i++)
        {
            if (t % i == 0)
            {
                ori[i - 1] = convert(ori[i - 1]);
            }
        }
    }
    for (int i = 0; i < NUM; i++)
    {
        if (ori[i] == 1)
        {
            sum++;
        }
    }
    printf("檻の中に残っている犬の数: %d匹\n", sum);
    return 0;
}
