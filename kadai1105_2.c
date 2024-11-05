// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int count = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10000; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        double r_square = x * x + y * y;
        if (r_square <= 1)
        {
            count++;
        }
    }
    printf("Ratio : %f\n", (double)count / 10000);
    return 0;
}
