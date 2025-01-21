// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    printf("年齢を入力してください。\n");
    int age;
    int fee;
    scanf("%d", &age);
    if (age <= 3)
    {
        fee = 0;
    }
    else if (age >= 4 && age <= 12)
    {
        fee = 250;
    }
    else
    {
        fee = 400;
    }
    printf("料金は%d円です。\n", fee);
    return 0;
}
