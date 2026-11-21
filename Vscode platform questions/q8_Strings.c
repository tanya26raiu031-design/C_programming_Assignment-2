#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[10005], second[10005];
    int frequencies[256] = {0};
    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL)
        return 1;
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    if (strlen(first) != strlen(second))
    {
        printf("false\n");
        return 0;
    }
    for (size_t i = 0; first[i] != '\0'; i++)
    {
        frequencies[(unsigned char)first[i]]++;
        frequencies[(unsigned char)second[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (frequencies[i] != 0)
        {
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}