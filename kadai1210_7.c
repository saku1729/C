// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int num[10] = {92, 5, 77, 39, 42, 84, 23, 64, 50, 15};
    int sum = 0;
    float ave, var;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        sum += num[i];
    }
    ave = (float)sum / 10;
    for (int i = 0; i < 10; i++)
    {
        var += (num[i] - ave) * (num[i] - ave);
    }
    var /= 10;
    printf("平均値：%.1f\n", ave);
    printf("分散：%.2f\n", var);
    return 0;
}
