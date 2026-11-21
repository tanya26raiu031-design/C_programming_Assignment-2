#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

#define MAX_VALUES 1000

unsigned long long digitSum(long long value)
{
    unsigned long long number;
    unsigned long long sum = 0;

    if (value < 0) {
        number = (unsigned long long)(-(value + 1)) + 1;
    } else {
        number = (unsigned long long)value;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main(void)
{
    int n, i, j;
    long long values[MAX_VALUES];
    long long pairCount = 0;

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_VALUES) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (scanf(SCAN_LLONG, &values[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (digitSum(values[i]) == digitSum(values[j])) {
                pairCount++;
            }
        }
    }

    printf(PRINT_LLONG "\n", pairCount);
    return 0;
}
