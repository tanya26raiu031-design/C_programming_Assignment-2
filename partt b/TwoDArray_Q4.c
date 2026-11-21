#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main(void)
{
    int rows, cols, matrix[MAX_ROWS][MAX_COLS];
    int i, j;
    int peakCount = 0;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX_ROWS || cols < 1 || cols > MAX_COLS) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int isPeak = 1;

            if (i > 0 && matrix[i][j] <= matrix[i - 1][j]) {
                isPeak = 0;
            }
            if (i + 1 < rows && matrix[i][j] <= matrix[i + 1][j]) {
                isPeak = 0;
            }
            if (j > 0 && matrix[i][j] <= matrix[i][j - 1]) {
                isPeak = 0;
            }
            if (j + 1 < cols && matrix[i][j] <= matrix[i][j + 1]) {
                isPeak = 0;
            }

            if (isPeak) {
                peakCount++;
            }
        }
    }

    printf("%d\n", peakCount);
    return 0;
}
