#ifdef _WIN32
#define PRINT_LLONG "%I64d"
#else
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

int main(void)
{
    int x;
    long long result;

    if (scanf("%d", &x) != 1) {
        return 1;
    }

    if (x < 0) {
        result = (long long)x * x + 2LL * x + 1;
    } else if (x < 10) {
        result = 3LL * x + 2;
    } else {
        result = 5LL * x - 7;
    }

    printf(PRINT_LLONG "\n", result);
    return 0;
}
