#include <stdio.h>

#define MAX_SIZE 100000

static int has_even_digit_count(int value)
{
    long long number = value;
    int digits = 0;
    if (number < 0)
        number = -number;
    do
    {
        digits++;
        number /= 10;
    } while (number > 0);
    return digits % 2 == 0;
}

int main(void)
{
    int n, value, count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &value) != 1)
            return 1;
        count += has_even_digit_count(value);
    }
    printf("%d\n", count);
    return 0;
}