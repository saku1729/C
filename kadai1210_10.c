// AJG24028 徳永大悟
#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    int number;
    char position[2];
} Player;
int main()
{
    Player p[11] = {
        {"Gonda", 12, "GK"},
        {"Miura", 2, "DF"},
        {"Muroya", 3, "DF"},
        {"Yamanaka", 5, "DF"},
        {"Makino", 20, "DF"},
        {"Haraguchi", 8, "MF"},
        {"Ito", 14, "MF"},
        {"Morita", 17, "MF"},
        {"Misao", 18, "FW"},
        {"Sugimoto", 11, "FW"},
        {"Kitagawa", 13, "FW"}};
    char str[20];
    scanf("%s", str);
    if (strcmp(str, "number") == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            printf("%2d  %s\n", p[i].number, p[i].name);
        }
    }
    else if (strcmp(str, "position") == 0)
    {
        for (int i = 0; i < 11; i++)
        {
            printf("%s  %s\n", p[i].position, p[i].name);
        }
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
