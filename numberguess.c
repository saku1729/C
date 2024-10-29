// AJG24028 徳永大悟
#include <stdio.h>
int main(void)
{
    int a;
    int num = 5;
    while (a != num)
    {
        printf("Please type in an integer : ");
        scanf("%d", &a);
        if (a == num)
        {
            printf("Congratulations!\n");
        }
        else
        {
            if (a < num)
            {
                printf("Greater than %d.\n", a);
            }
            else
            {
                printf("Less than %d.\n", a);
            }
        }
    }
    return 0;
}
