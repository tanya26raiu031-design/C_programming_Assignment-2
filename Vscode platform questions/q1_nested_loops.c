#include <stdio.h>

static int reverse_number(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main(void)
{
    int first, last, divisor, beautiful_days = 0;
    if (scanf("%d %d %d", &first, &last, &divisor) != 3 || divisor == 0)
        return 1;

    for (int day = first; day <= last; day++)
    {
        int difference = day - reverse_number(day);
        if (difference < 0)
            difference = -difference;
        if (difference % divisor == 0)
            beautiful_days++;
    }
    printf("%d\n", beautiful_days);
    return 0;
}