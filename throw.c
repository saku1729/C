// AJG24028 徳永大悟
#include <stdio.h>
#include <math.h>
#define g 9.8
#define PI 3.141592
int main(void)
{
    double v, theta, t, L;
    printf("初速度v[m/s]を入力してください。: ");
    scanf("%lf", &v);
    printf("角度θ[度]を入力してください。: ");
    scanf("%lf", &theta);
    double rad = theta * PI / 180;
    L = v * v * sin(2 * rad) / g;
    printf("距離L[m]は%lfです。\n", L);
    return 0;
}
