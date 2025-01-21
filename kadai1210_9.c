// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int x = 7;
    int y = 3;
    int *xp = &x;
    int *yp = &y;
    printf("x=%d, y=%d\n", x, y);
    printf("このときxをyで割ったは余りは%dです。\n", *xp % *yp);
    return 0;
}
