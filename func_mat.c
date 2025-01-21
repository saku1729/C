// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
void matrix(int a[3][3], int b[3][3])
{
    int c[3][3] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }
}
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
    printf("\nAB\n");
    matrix(a, b);
    return 0;
}
