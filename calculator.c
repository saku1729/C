// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    while (a <= 0 || b <= 0)
    {
        printf("正の整数を入力してください。\n");
        scanf("%d %d", &a, &b);
    }
    printf("和:   %d + %d = %d\n", a, b, a + b);
    printf("差:   %d - %d = %d\n", a, b, a - b);
    printf("積:   %d * %d = %d\n", a, b, a * b);
    printf("商:   %d / %d = %d\n", a, b, a / b);
    printf("剰余: %d %% %d = %d\n", a, b, a % b);
    return 0;
}
