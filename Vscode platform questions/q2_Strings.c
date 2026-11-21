#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10005];
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;
    size_t length = strcspn(text, "\r\n");
    text[length] = '\0';

    for (size_t i = 0; i < length / 2; i++)
    {
        char temporary = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temporary;
    }
    printf("%s\n", text);
    return 0;
}