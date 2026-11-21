#include <ctype.h>
#include <stdio.h>

#define MAX_LINE 4096

int main(void)
{
    char line[MAX_LINE];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int i;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 1;
    }

    for (i = 0; line[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)line[i];

        if (isalpha(ch)) {
            int lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
