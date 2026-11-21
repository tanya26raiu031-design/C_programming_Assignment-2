#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

int main(void)
{
    long long n, k;

    if (scanf(SCAN_LLONG " " SCAN_LLONG, &n, &k) != 2 || k <= 0) {
        return 1;
    }

    printf(PRINT_LLONG "\n", n > 0 ? n / k : 0);
    return 0;
}
