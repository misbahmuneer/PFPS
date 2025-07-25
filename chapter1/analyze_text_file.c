#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuations = 0;
    int inWord = 0;

    fptr = fopen("input.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }

        if (ch == '.' || ch == '!' || ch == '?')
            sentences++;

        if (ispunct(ch))
            punctuations++;

        if (isspace(ch) || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else if (isalnum(ch)) {
            inWord = 1;
        }
    }

    // If the file ends while still in a word
    if (inWord) {
        words++;
    }

    fclose(fptr);

    printf("Characters        : %d\n", characters);
    printf("Words             : %d\n", words);
    printf("Sentences         : %d\n", sentences);
    printf("Vowels            : %d\n", vowels);
    printf("Consonants        : %d\n", consonants);
    printf("Punctuation Marks : %d\n", punctuations);

    return 0;
}
