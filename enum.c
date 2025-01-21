#include <stdio.h>
typedef enum
{
    false,
    true
} bool;
int main()
{
    bool b = true;
    if (b)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
