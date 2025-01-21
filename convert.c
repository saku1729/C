// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    char word[32];
    char *wp = word;
    printf("31文字までの文字列を入力してください。(英字)\n大文字<->小文字変換をします。\n");
    printf("文字列: ");
    scanf("%s", word);
    for (int i = 0; i < 32; i++)
    {
        if (*(wp + i) == '\0')
        {
            printf("変換後: %s\n", word);
            return 0;
        }
        else if (*(wp + i) >= 'a' && *(wp + i) <= 'z')
        {
            *(wp + i) = *(wp + i) - 32;
        }
        else if (*(wp + i) >= 'A' && *(wp + i) <= 'Z')
        {
            *(wp + i) = *(wp + i) + 32;
        }
        else
        {
            printf("エラー文字: %c\n", *(wp + i));
            return 1;
        }
    }
    printf("31文字までの文字列にしてください。\n");
    return 1;
}
