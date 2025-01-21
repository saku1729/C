// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main(int argc, char **argv)
{
    int a = atof(argv[1]);
    int b = atof(argv[2]);
    printf("%dと%dの最大公約数は%dです。\n", a, b, gcd(a, b));
    return 0;
}
