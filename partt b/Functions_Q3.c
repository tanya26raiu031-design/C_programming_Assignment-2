#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

long long rectangleArea(long long length, long long width)
{
    return length * width;
}

int main(void)
{
    long long length, width;

    if (scanf(SCAN_LLONG " " SCAN_LLONG, &length, &width) != 2) {
        return 1;
    }

    printf(PRINT_LLONG "\n", rectangleArea(length, width));
    return 0;
}
