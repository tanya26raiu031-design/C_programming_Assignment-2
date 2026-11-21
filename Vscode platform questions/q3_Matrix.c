#include <stdio.h>

#define MAX_SIDE 100

int main(void)
{
    int customers, banks, wealth[MAX_SIDE][MAX_SIDE];
    if (scanf("%d %d", &customers, &banks) != 2 ||
        customers < 1 || customers > MAX_SIDE || banks < 1 || banks > MAX_SIDE)
        return 1;

    long long richest = 0;
    for (int row = 0; row < customers; row++)
    {
        long long total = 0;
        for (int column = 0; column < banks; column++)
        {
            if (scanf("%d", &wealth[row][column]) != 1)
                return 1;
            total += wealth[row][column];
        }
        if (row == 0 || total > richest)
            richest = total;
    }
    printf("%lld\n", richest);
    return 0;
}