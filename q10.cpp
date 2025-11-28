#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char words[5][20] = {"madam", "hello", "level", "moon", "racecar"};

    for (int i = 0; i < 5; i++) {
        if (isPalindrome(words[i]))
            printf("%s -> Palindrome\n", words[i]);
        else
            printf("%s -> Not Palindrome\n", words[i]);
    }
}

