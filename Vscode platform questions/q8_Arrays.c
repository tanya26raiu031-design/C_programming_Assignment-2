#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, rotations, values[MAX_SIZE];
    if (scanf("%d %d", &n, &rotations) != 2 || n < 1 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    rotations %= n;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", values[(i + rotations) % n]);
    }
    printf("\n");
    return 0;
}