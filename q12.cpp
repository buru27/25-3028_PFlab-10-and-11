#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;

    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n') words++;
        if (ch == '\n') lines++;
    }
    fclose(f);

    printf("Chars: %d\nWords: %d\nLines: %d\n", chars, words+1, lines+1);
}

