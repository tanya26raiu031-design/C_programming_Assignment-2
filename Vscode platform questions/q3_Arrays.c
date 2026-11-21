#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, values[MAX_SIZE], remove_value, kept = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }
    if (scanf("%d", &remove_value) != 1)
        return 1;

    for (int i = 0; i < n; i++)
    {
        if (values[i] != remove_value)
            values[kept++] = values[i];
    }
    printf("%d\n", kept);
    for (int i = 0; i < kept; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", values[i]);
    }
    printf("\n");
    return 0;
}