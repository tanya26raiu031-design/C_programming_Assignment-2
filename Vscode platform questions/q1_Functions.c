#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    if (d > maximum) maximum = d;
    return maximum;
}

int main(void)
{
    int a, b, c, d;
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) return 1;
    printf("%d\n", max_of_four(a, b, c, d));
    return 0;
}