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
    long long totalSeconds;
    long long hours, minutes, seconds;

    if (scanf(SCAN_LLONG, &totalSeconds) != 1) {
        return 1;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf(PRINT_LLONG " " PRINT_LLONG " " PRINT_LLONG "\n",
           hours, minutes, seconds);
    return 0;
}
