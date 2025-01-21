#include <stdio.h>
#include <stdlib.h>

// 比較関数（qsort用）
int compare(const void *a, const void *b)
{
    return (*(double *)a > *(double *)b) - (*(double *)a < *(double *)b);
}

// 順位計算関数（同順位を考慮）
void calculateRanks(double prices[], int period, double ranks[])
{
    int i, j;
    double sorted_prices[period];
    for (i = 0; i < period; i++)
    {
        sorted_prices[i] = prices[i];
    }
    qsort(sorted_prices, period, sizeof(double), compare);

    // 各価格のランクを計算
    for (i = 0; i < period; i++)
    {
        double value = prices[i];
        int count = 0; // 同じ値の数
        double rank_sum = 0;

        // 同順位の平均ランクを計算
        for (j = 0; j < period; j++)
        {
            if (sorted_prices[j] == value)
            {
                rank_sum += j + 1; // ランクは1からスタート
                count++;
            }
        }

        ranks[i] = rank_sum / count; // 平均ランク
    }
}

// RCI計算関数
double calculateRCI(double prices[], int period)
{
    if (period <= 1)
    {
        printf("期間は2以上で指定してください。\n");
        return 0.0;
    }

    int i;
    double sum_diff = 0.0;

    // 元の順位（1, 2, ..., period）
    double original_rank[period];
    for (i = 0; i < period; i++)
    {
        original_rank[i] = i + 1;
    }

    // 現在のランクを計算
    double current_rank[period];
    calculateRanks(prices, period, current_rank);

    // 差の二乗和を計算
    for (i = 0; i < period; i++)
    {
        double diff = current_rank[i] - original_rank[i];
        sum_diff += diff * diff;
    }

    // RCIを計算
    double rci = (1.0 - (6.0 * sum_diff) / (period * (period * period - 1))) * 100.0;
    return rci;
}

// メイン関数
int main()
{

    int period = 0;
    printf("期間を入力してください：");
    scanf("%d", &period);
    double prices[period];
    printf("価格データを入力してください\n");
    for (int i = 0; i < period; i++)
    {
        printf("%d日目の価格：", i + 1);
        scanf("%lf", &prices[i]);
    }
    if (sizeof(prices) / sizeof(prices[0]) < period)
    {
        printf("価格データが期間より短いです。\n");
        return 1;
    }

    double rci = calculateRCI(prices, period);
    printf("RCI（期間 %d）は %.2f です。\n", period, rci);

    return 0;
}
