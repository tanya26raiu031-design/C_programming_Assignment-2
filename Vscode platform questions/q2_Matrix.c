#include <stdio.h>

#define MAX_SIDE 100

int main(void)
{
    int n, matrix[MAX_SIDE][MAX_SIDE];
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIDE)
        return 1;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            if (scanf("%d", &matrix[row][column]) != 1)
                return 1;
        }
    }

    long long diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        diagonal_sum += matrix[i][i];
        if (i != n - 1 - i)
            diagonal_sum += matrix[i][n - 1 - i];
    }
    printf("%lld\n", diagonal_sum);
    return 0;
}