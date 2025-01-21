// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int x = 11, y = 19;
    printf("x = %d, y = %d\n", x, y);
    int *xp = &x, *yp = &y;
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
