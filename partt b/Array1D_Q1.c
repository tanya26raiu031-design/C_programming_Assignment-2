#include <stdio.h>

int main(void)
{
    int n, i, value, previous;
    int currentLength = 1;
    int longestLength = 1;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    if (scanf("%d", &previous) != 1) {
        return 1;
    }

    for (i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }

        if (value > previous) {
            currentLength++;
        } else {
            currentLength = 1;
        }
        if (currentLength > longestLength) {
            longestLength = currentLength;
        }
        previous = value;
    }

    printf("%d\n", longestLength);
    return 0;
}
