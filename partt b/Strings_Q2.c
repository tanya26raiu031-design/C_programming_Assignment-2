#include <stdio.h>

#define MAX_WORD 4096

int main(void)
{
    char text[MAX_WORD];
    int i, runLength;

    if (scanf("%4095s", text) != 1) {
        return 1;
    }

    for (i = 0; text[i] != '\0'; i += runLength) {
        int j = i + 1;
        runLength = 1;

        while (text[j] != '\0' && text[j] == text[i]) {
            runLength++;
            j++;
        }
        printf("%c%d", text[i], runLength);
    }
    printf("\n");
    return 0;
}
