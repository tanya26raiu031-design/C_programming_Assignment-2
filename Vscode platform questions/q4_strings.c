#include <stdio.h>

int main(void)
{
    char character, word[1005], sentence[10005];
    if (scanf(" %c", &character) != 1 || scanf("%1004s", word) != 1)
        return 1;
    getchar();
    if (fgets(sentence, sizeof(sentence), stdin) == NULL)
        return 1;

    printf("%c\n%s\n%s", character, word, sentence);
    return 0;
}