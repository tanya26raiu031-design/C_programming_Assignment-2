#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

unsigned long long magnitude(long long value)
{
    if (value < 0) {
        return (unsigned long long)(-(value + 1)) + 1;
    }
    return (unsigned long long)value;
}

unsigned long long gcd(long long a, long long b)
{
    unsigned long long x = magnitude(a);
    unsigned long long y = magnitude(b);

    while (y != 0) {
        unsigned long long remainder = x % y;
        x = y;
        y = remainder;
    }
    return x;
}

int main(void)
{
    long long n, m, x;
    long long count = 0;

    if (scanf(SCAN_LLONG " " SCAN_LLONG, &n, &m) != 2) {
        return 1;
    }

    for (x = 1; x <= m; x++) {
        if (gcd(x, n) == 1) {
            count++;
        }
        if (x == m) {
            break;
        }
    }

    printf(PRINT_LLONG "\n", count);
    return 0;
}
