#include <stdio.h>
int main()
{
    int sort[] = {15, 1, 93, 52, 66, 31, 87, 0, 42, 77, 46, 24, 99, 10, 19, 36, 27, 4, 58, 76, 2, 81, 50, 102, 33, 94, 20, 14, 80, 82, 49, 41, 12, 143, 121, 7, 111, 100, 60, 55, 108, 34, 150, 103, 109, 130, 25, 54, 57, 159, 136, 110, 3, 167, 119, 72, 18, 151, 105, 171, 160, 144, 85, 201, 193, 188, 190, 146, 210, 211, 63, 207};
    int count = sizeof(sort) / sizeof(sort[0]);
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (sort[i] < sort[j])
            {
                int temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d", sort[i]);
    }
    printf("\n");
    return 0;
}
