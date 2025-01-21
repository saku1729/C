// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(int argc, char **argv)
{
    int a = atof(argv[1]);
    int b = atof(argv[2]);
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf(" ↓\n");
    printf("%d %d\n", a, b);
    return 0;
}
