#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_ULLONG "%I64u"
#else
#define SCAN_LLONG "%lld"
#define PRINT_ULLONG "%llu"
#endif
#include <stdio.h>

#define MAX_VALUES 1000

unsigned long long absoluteDifference(long long a, long long b)
{
    if (a >= b) {
        return (unsigned long long)a - (unsigned long long)b;
    }
    return (unsigned long long)b - (unsigned long long)a;
}

int main(void)
{
    int n, i, j;
    long long values[MAX_VALUES];
    unsigned long long minimumDifference = 0;

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_VALUES) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (scanf(SCAN_LLONG, &values[i]) != 1) {
            return 1;
        }
    }

    if (n < 2) {
        printf("None\n");
        return 0;
    }

    minimumDifference = absoluteDifference(values[0], values[1]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            unsigned long long difference =
                absoluteDifference(values[i], values[j]);
            if (difference < minimumDifference) {
                minimumDifference = difference;
            }
        }
    }

    printf(PRINT_ULLONG "\n", minimumDifference);
    return 0;
}
