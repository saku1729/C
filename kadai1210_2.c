// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    printf("本体価格を入力してください。\n");
    int price;
    scanf("%d", &price);
    printf("消費税率が10％の時、定価は%d円です。\n", price * 110 / 100);
    return 0;
}
