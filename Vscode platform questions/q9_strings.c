#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[10005], second[10005];
    int forward[256], reverse[256];
    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL)
        return 1;
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';
    memset(forward, -1, sizeof(forward));
    memset(reverse, -1, sizeof(reverse));

    size_t length = strlen(first);
    int isomorphic = length == strlen(second);
    for (size_t i = 0; isomorphic && i < length; i++)
    {
        unsigned char a = (unsigned char)first[i];
        unsigned char b = (unsigned char)second[i];
        if (forward[a] == -1 && reverse[b] == -1)
        {
            forward[a] = b;
            reverse[b] = a;
        }
        else if (forward[a] != b || reverse[b] != a)
        {
            isomorphic = 0;
        }
    }
    printf("%s\n", isomorphic ? "true" : "false");
    return 0;
}