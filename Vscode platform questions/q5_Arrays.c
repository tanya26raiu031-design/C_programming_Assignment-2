#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, values[MAX_SIZE], target;
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }
    if (scanf("%d", &target) != 1)
        return 1;

    int low = 0, high = n;
    while (low < high)
    {
        int middle = low + (high - low) / 2;
        if (values[middle] < target)
            low = middle + 1;
        else
            high = middle;
    }
    printf("%d\n", low);
    return 0;
}