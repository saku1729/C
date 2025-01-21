// AJG24028 徳永大悟
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    char *week[7] = {"日", "月", "火", "水", "木", "金", "土"};
    int y = atof(argv[1]);
    int m = atof(argv[2]);
    int d = atof(argv[3]);
    if (m == 1 || m == 2)
    {
        m += 12;
        y--;
    }
    int h = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;
    if (m == 13 || m == 14)
    {
        m -= 12;
        y++;
    }
    printf("%d年%d月%d日は%s曜日です。\n", y, m, d, week[h]);
    return 0;
}
