// AJG24028 徳永大悟
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    printf("256文字までの文字列を入力してください。(英字・数字のみ)\n");
    scanf("%s", str);
    printf("入力された文字列の長さは%ldです。\n", strlen(str));
    return 0;
}
