// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int num;
    printf("整数を入力してください。\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("入力された数は偶数です。\n");
    }
    else
    {
        printf("入力された数は奇数です。\n");
    }
    return 0;
}
