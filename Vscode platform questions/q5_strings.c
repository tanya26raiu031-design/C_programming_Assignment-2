#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[10005], filtered[10005];
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    int count = 0;
    for (int i = 0; text[i] != '\0' && text[i] != '\n' && text[i] != '\r'; i++)
    {
        unsigned char character = (unsigned char)text[i];
        if (isalnum(character))
            filtered[count++] = (char)tolower(character);
    }
    filtered[count] = '\0';

    int is_palindrome = 1;
    for (int i = 0; i < count / 2; i++)
    {
        if (filtered[i] != filtered[count - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    printf("%s\n", is_palindrome ? "true" : "false");
    return 0;
}