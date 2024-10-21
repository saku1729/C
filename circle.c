// AJG24028 徳永大悟
#include <stdio.h>
#define PI 3.141592
int main()
{
    float x1, y1, x2, y2;
    float dis_2, area;
    printf("2点の座標を入力してください。\n");
    printf("x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("x2 y2: ");
    scanf("%f %f", &x2, &y2);
    dis_2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    area = PI * dis_2 / 4;
    printf("(%f,%f), (%f,%f)を結ぶ直線を直径とする円の面積は%fです。\n", x1, y1, x2, y2, area);
    return 0;
}
