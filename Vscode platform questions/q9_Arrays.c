#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int n, values[MAX_SIZE];
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    int candidate = 0, votes = 0;
    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
            candidate = values[i];
        votes += (values[i] == candidate) ? 1 : -1;
    }
    printf("%d\n", candidate);
    return 0;
}