#include <stdio.h>

#define MAX_SIDE 100

int main(void)
{
    int rows, columns, matrix[MAX_SIDE][MAX_SIDE], target;
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
    if (scanf("%d", &target) != 1)
        return 1;

    int low = 0, high = rows * columns - 1, found = 0;
    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        int value = matrix[middle / columns][middle % columns];
        if (value == target)
        {
            found = 1;
            break;
        }
        if (value < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    printf("%s\n", found ? "true" : "false");
    return 0;
}