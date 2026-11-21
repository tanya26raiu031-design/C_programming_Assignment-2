#include <stdio.h>

int main(void)
{
    int n, a, b, c;
    int found = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    for (a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {
            for (c = b + 1; c <= n; c++) {
                long long aa = (long long)a * a;
                long long bb = (long long)b * b;
                long long cc = (long long)c * c;

                if (aa + bb == cc) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
