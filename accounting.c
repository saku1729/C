// AJG24028 徳永大悟
#include <stdio.h>
int main()
{
    int prices = 128 * 2 + 116;
    printf("１２８円のおにぎりを２個と１１６円のパンを１つを購入し１０００円を支払いました。(消費税:８％)\n");
    printf("お釣りは%d円でした。\n", 1000 - (int)(prices * 1.08));
    return 0;
}
