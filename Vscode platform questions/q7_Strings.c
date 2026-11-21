#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10005];
    int frequencies[256] = {0};
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    size_t length = strcspn(text, "\r\n");
    for (size_t i = 0; i < length; i++)
    {
        frequencies[(unsigned char)text[i]]++;
    }
    for (size_t i = 0; i < length; i++)
    {
        if (frequencies[(unsigned char)text[i]] == 1)
        {
            printf("%zu\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}