#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int n, matrix[MAX_SIZE][MAX_SIZE];
    int i, j;
    int symmetric = 1;

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
            }
        }
    }

    printf("%s\n", symmetric ? "YES" : "NO");
    return 0;
}
