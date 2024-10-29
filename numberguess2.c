// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int a, count = 0;
    srand((unsigned)time(NULL));
    printf("0から10までの数字を当ててください。\n");
    int num = rand() % 11;
    while (a != num)
    {
        count++;
        printf("数字を入力してください : ");
        scanf("%d", &a);
        if (a == num)
        {
            printf("おめでとうございます！\n%d回目で正解です。\n", count);
        }
        else
        {
            if (a < num)
            {
                printf("%dより大きいです。\n", a);
            }
            else
            {
                printf("%dより小さいです。\n", a);
            }
        }
    }
    return 0;
}
