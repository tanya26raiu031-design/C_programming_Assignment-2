#ifdef _WIN32
#define PRINT_LLONG "%I64d"
#else
#define PRINT_LLONG "%lld"
#endif
#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main(void)
{
    int rows, cols, matrix[MAX_ROWS][MAX_COLS];
    long long rowSums[MAX_ROWS] = {0};
    long long columnSums[MAX_COLS] = {0};
    int i, j;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX_ROWS || cols < 1 || cols > MAX_COLS) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
            rowSums[i] += matrix[i][j];
            columnSums[j] += matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        printf("%s" PRINT_LLONG, i == 0 ? "" : " ", rowSums[i]);
    }
    printf("\n");

    for (j = 0; j < cols; j++) {
        printf("%s" PRINT_LLONG, j == 0 ? "" : " ", columnSums[j]);
    }
    printf("\n");
    return 0;
}
