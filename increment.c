#include <stdio.h>
int main()
{
    int i, j;
    i = 3;
    j = 12;
    printf("1: i=%d,j=%d\n", i, j);
    i++;
    printf("2: i=%d,j=%d\n", i, j);
    ++i;
    printf("3: i=%d,j=%d\n", i, j);
    j = j + i++;
    printf("4: i=%d,j=%d\n", i, j);
    j = j + ++i;
    printf("5: i=%d,j=%d\n", i, j);
    return 0;
}
