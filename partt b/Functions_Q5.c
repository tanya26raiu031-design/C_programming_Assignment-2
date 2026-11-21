#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_ULLONG "%I64u"
#else
#define SCAN_LLONG "%lld"
#define PRINT_ULLONG "%llu"
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
    long long a, b;

    if (scanf(SCAN_LLONG " " SCAN_LLONG, &a, &b) != 2 ||
        (a == 0 && b == 0)) {
        return 1;
    }

    printf(PRINT_ULLONG "\n", gcd(a, b));
    return 0;
}
