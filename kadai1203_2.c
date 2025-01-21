// AJG24028 徳永大悟
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Person
{
    char name[40];
    int height;
    float weight;
    float bmi;
} Person;
int compare_height(const void *a, const void *b)
{
    return (*(Person *)a).height < (*(Person *)b).height;
}
int compare_weight(const void *a, const void *b)
{
    return (*(Person *)a).weight > (*(Person *)b).weight;
}
int compare_bmi(const void *a, const void *b)
{
    return (*(Person *)a).bmi < (*(Person *)b).bmi;
}
int main(void)
{
    Person p[3] = {
        {"Hanako", 156, 47.7, 0},
        {"Taro", 171, 75.2, 0},
        {"Jiro", 180, 83.0, 0},
    };
    for (int i = 0; i < 3; i++)
    {
        p[i].bmi = p[i].weight / ((p[i].height / 100.0) * (p[i].height / 100.0));
    }
    printf("身長の高い順\n");
    qsort(p, 3, sizeof(Person), compare_height);
    for (int i = 0; i < 3; i++)
    {
        printf("%6s %d\n", p[i].name, p[i].height);
    }
    printf("\n体重の低い順\n");
    qsort(p, 3, sizeof(Person), compare_weight);
    for (int i = 0; i < 3; i++)
    {
        printf("%6s %2.1f\n", p[i].name, p[i].weight);
    }
    printf("\nBMIの高い順\n");
    qsort(p, 3, sizeof(Person), compare_bmi);
    for (int i = 0; i < 3; i++)
    {
        printf("%6s %2.2f\n", p[i].name, p[i].bmi);
    }
    return 0;
}
