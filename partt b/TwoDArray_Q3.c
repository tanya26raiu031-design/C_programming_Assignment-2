#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main(void)
{
    int rows, cols, matrix[MAX_ROWS][MAX_COLS];
    int i, j, k;

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
            int minimumInRow = 1;
            int maximumInColumn = 1;

            for (k = 0; k < cols; k++) {
                if (matrix[i][k] < matrix[i][j]) {
                    minimumInRow = 0;
                }
            }
            for (k = 0; k < rows; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    maximumInColumn = 0;
                }
            }

            if (minimumInRow && maximumInColumn) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}
