#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#endif
#include <stdio.h>

int isPerfectSquare(long long n)
{
    long long candidate;

    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    for (candidate = 1; candidate <= n / candidate; candidate++) {
        if (candidate * candidate == n) {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    long long n;

    if (scanf(SCAN_LLONG, &n) != 1) {
        return 1;
    }

    printf("%d\n", isPerfectSquare(n));
    return 0;
}
