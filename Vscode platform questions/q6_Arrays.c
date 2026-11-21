#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;
    return (a > b) - (a < b);
}

int main(void)
{
    int n, values[MAX_SIZE], has_duplicate = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    qsort(values, (size_t)n, sizeof(values[0]), compare_ints);
    for (int i = 1; i < n; i++)
    {
        if (values[i] == values[i - 1])
        {
            has_duplicate = 1;
            break;
        }
    }
    printf("%d\n", has_duplicate);
    return 0;
}