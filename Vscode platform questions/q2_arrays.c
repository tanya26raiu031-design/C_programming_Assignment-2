#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, values[MAX_SIZE], nonzero_count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
        if (values[i] != 0)
            values[nonzero_count++] = values[i];
    }

    for (int i = nonzero_count; i < n; i++)
        values[i] = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", values[i]);
    }
    printf("\n");
    return 0;
}