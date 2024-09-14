#include <stdio.h>

int main()
{
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &b[i]);
    }
    return 0;
}
