#include <stdio.h>
#include <ctype.h>

int countVowels(char str[], int i) {
    if (str[i] == '\0') return 0;

    char ch = tolower(str[i]);
    int isVowel = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

    return isVowel + countVowels(str, i+1);
}

int main() {
    char s[100];
    gets(s);
    printf("Vowels = %d", countVowels(s, 0));
}

