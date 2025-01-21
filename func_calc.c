// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
void culc(double x, double y)
{
    printf("x=%f, y=%f\n", x, y);
    printf("和: %f\n", x + y);
    printf("差: %f\n", x - y);
    printf("積: %f\n", x * y);
    printf("商: %f\n", x / y);
}
int main(int argc, char **argv)
{
    double x = atof(argv[1]);
    double y = atof(argv[2]);
    culc(x, y);
    return 0;
}
