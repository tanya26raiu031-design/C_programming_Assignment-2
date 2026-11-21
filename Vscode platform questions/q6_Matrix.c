#include <stdio.h>

#define MAX_SIDE 100

int main(void)
{
    int rows, columns, matrix[MAX_SIDE][MAX_SIDE];
    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > MAX_SIDE || columns < 1 || columns > MAX_SIDE)
        return 1;
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (scanf("%d", &matrix[row][column]) != 1)
                return 1;
        }
    }

    int first_row_zero = 0, first_column_zero = 0;
    for (int column = 0; column < columns; column++)
    {
        if (matrix[0][column] == 0)
            first_row_zero = 1;
    }
    for (int row = 0; row < rows; row++)
    {
        if (matrix[row][0] == 0)
            first_column_zero = 1;
    }
    for (int row = 1; row < rows; row++)
    {
        for (int column = 1; column < columns; column++)
        {
            if (matrix[row][column] == 0)
            {
                matrix[row][0] = 0;
                matrix[0][column] = 0;
            }
        }
    }
    for (int row = 1; row < rows; row++)
    {
        for (int column = 1; column < columns; column++)
        {
            if (matrix[row][0] == 0 || matrix[0][column] == 0)
                matrix[row][column] = 0;
        }
    }
    if (first_row_zero)
    {
        for (int column = 0; column < columns; column++)
            matrix[0][column] = 0;
    }
    if (first_column_zero)
    {
        for (int row = 0; row < rows; row++)
            matrix[row][0] = 0;
    }

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (column > 0)
                printf(" ");
            printf("%d", matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}