#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, values[MAX_SIZE], unique_count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
        if (unique_count == 0 || values[i] != values[unique_count - 1])
        {
            values[unique_count++] = values[i];
        }
    }

    printf("%d\n", unique_count);
    for (int i = 0; i < unique_count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", values[i]);
    }
    printf("\n");
    return 0;
}