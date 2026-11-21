#ifdef _WIN32
#define SCAN_LLONG "%I64d"
#define PRINT_LLONG "%I64d"
#else
#define SCAN_LLONG "%lld"
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

#define MAX_VALUES 1000

int main(void)
{
    int n, i, j;
    long long target;
    int values[MAX_VALUES];
    long long pairCount = 0;

    if (scanf("%d " SCAN_LLONG, &n, &target) != 2 ||
        n < 0 || n > MAX_VALUES) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((long long)values[i] + values[j] == target) {
                pairCount++;
            }
        }
    }

    printf(PRINT_LLONG "\n", pairCount);
    return 0;
}
