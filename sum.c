// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int a, b;
    int cal;
    scanf("%d %d", &a, &b);
    while (a >= b)
    {
        printf("aがbより小さくなるように入力してください。\n");
        scanf("%d %d", &a, &b);
    }
    cal = (a + b) * (b - a + 1) / 2;
    printf("%dから%dまでの和は%dです。\n", a, b, cal);
    return 0;
}
