#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10005], pattern[10005];
    if (fgets(text, sizeof(text), stdin) == NULL ||
        fgets(pattern, sizeof(pattern), stdin) == NULL)
        return 1;
    text[strcspn(text, "\r\n")] = '\0';
    pattern[strcspn(pattern, "\r\n")] = '\0';

    char *match = strstr(text, pattern);
    printf("%d\n", match == NULL ? -1 : (int)(match - text));
    return 0;
}