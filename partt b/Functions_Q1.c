#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int maximum = a;

    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }
    return maximum;
}

int main(void)
{
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }

    printf("%d\n", maxOfThree(a, b, c));
    return 0;
}
