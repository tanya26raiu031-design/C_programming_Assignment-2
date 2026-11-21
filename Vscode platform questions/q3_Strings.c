#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char text[10005];
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;
    for (int i = 0; text[i] != '\0' && text[i] != '\n' && text[i] != '\r'; i++)
    {
        text[i] = (char)tolower((unsigned char)text[i]);
    }
    printf("%s\n", text);
    return 0;
}