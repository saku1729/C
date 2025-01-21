// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int a[3][3] = {
        {3, 0, 1},
        {1, 2, 0},
        {0, 1, -1},
    };
    int b[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int c[3][3] = {};
    int d[3][3] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            for (int k = 0; k < 3; k++)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nB\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\nこのとき、AとBの和と積は以下の通りです。\n");
    printf("\nA+B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\nAB\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
