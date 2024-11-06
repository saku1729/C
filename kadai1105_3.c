// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int x, y;
    int count = 0;
    int medal = 10;
    int bet;
    int small_or_large;
    srand((unsigned)time(NULL));
    while (medal > 0 && medal < 20)
    {
        x = rand() % 13 + 1;
        y = rand() % 13 + 1;
        while (x == y)
        {
            y = rand() % 13 + 1;
        }
        printf("Medal：%d\n", medal);
        printf("small(0) or large(1):");
        scanf("%d", &small_or_large);
        while (small_or_large != 0 && small_or_large != 1)
        {
            printf("small(0) or large(1):");
            scanf("%d", &small_or_large);
        }
        printf("bet(1~%d):", medal);
        scanf("%d", &bet);
        while (bet > medal || bet <= 0)
        {
            printf("bet(1~%d):", medal);
            scanf("%d", &bet);
        }
        if (small_or_large == 1)
        {
            if (x < y)
            {
                medal += bet * 2;
                printf("You win!!\n\n");
            }
            else
            {
                medal -= bet;
                printf("You lose...\n\n");
            }
        }
        else
        {
            if (x > y)
            {
                medal += bet * 2;
                printf("You win!!\n\n");
            }
            else
            {
                medal -= bet;
                printf("You lose...\n\n");
            }
        }
    }
    if (medal <= 0)
    {
        printf("Game Over...\n");
    }
    else
    {
        printf("Congratulation!!\n");
    }
    return 0;
}
