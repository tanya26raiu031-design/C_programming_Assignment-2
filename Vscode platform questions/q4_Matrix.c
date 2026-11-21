#include <stdio.h>

#define MAX_SIDE 100

int main(void)
{
    int rows, columns, matrix[MAX_SIDE][MAX_SIDE], negative_count = 0;
    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > MAX_SIDE || columns < 1 || columns > MAX_SIDE)
        return 1;
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (scanf("%d", &matrix[row][column]) != 1)
                return 1;
            if (matrix[row][column] < 0)
                negative_count++;
        }
    }
    printf("%d\n", negative_count);
    return 0;
}