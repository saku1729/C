// AJG24028 徳永大悟
#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%2d! = %d\n", i, factorial(i));
    }
    return 0;
}
