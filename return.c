#include <stdio.h>
int compare(int a, int b)
{
    return a > b;
}
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", compare(a, b));
    return 0;
}
