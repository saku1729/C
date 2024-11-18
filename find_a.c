// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int count = 0;
    char word[100];
    printf("文字列を入力してください。\n");
    scanf("%s", word);
    for (int i = 0; i < 100; i++)
    {
        if (word[i] == 'a')
        {
            count++;
        }
    }
    printf("文字列に含まれるaの数は%d個です。\n", count);
    return 0;
}
