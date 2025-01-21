// AJG24028 徳永大悟
#include <stdio.h>
#include <string.h>
typedef struct Person
{
    char name[40];
    int height;
    float weight;
} Person;
int main(void)
{
    Person p[5] = {
        {"Hanako", 156, 47.7},
        {"Taro", 171, 75.2},
        {"Jiro", 180, 83.0},
        {"Ken", 167, 59.4},
        {"Masa", 175, 65.0},
    };
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", p[i].name);
    }
    printf("\n名前を入力してください: ");
    char name[40];
    float bmi;
    scanf("%s", name);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(name, p[i].name) == 0)
        {
            bmi = p[i].weight / ((p[i].height / 100.0) * (p[i].height / 100.0));
            printf("BMI: %.2f\n", bmi);
            break;
        }
    }
    return 0;
}
