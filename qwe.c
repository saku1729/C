// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int stone;
    srand((unsigned)time(NULL));
    printf("石取りゲーム\n");
    printf("石の初期所持数を入力してください : ");
    scanf("%d", &stone);
    if (stone > 0)
    {
        printf("\nプレイヤーのターン\n");
        printf("現在の石の数 : %d\n", stone);
        printf("1~3個の石を取り除いてください : ");
    }
    while (stone > 0)
    {
        int player;
        scanf("%d", &player);
        if (player < 1 || player > 3)
        {
            printf("1~3個の石を取り除いてください : ");
            continue;
        }
        stone -= player;
        printf("%d個の石を取り除きました。\n", player);
        if (stone <= 0)
        {
            printf("石が０個になりました。\n");
            printf("\nプレイヤーの負けです。\n");
            break;
        }
        printf("\nコンピュータのターン\n");
        printf("現在の石の数 : %d\n", stone);
        int computer = rand() % 3 + 1;
        printf("%d個の石を取り除きました。\n", computer);
        stone -= computer;
        if (stone <= 0)
        {
            printf("石が０個になりました。\n");
            printf("\nプレイヤーの勝ちです。\n");
            break;
        }
        printf("\nプレイヤーのターン\n");
        printf("現在の石の数 : %d\n", stone);
        printf("1~3個の石を取り除いてください : ");
    }
    return 0;
}
