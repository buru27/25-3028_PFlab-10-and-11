#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {"apple", "banana", "grape", "mango", "melon"};
    char key[20];
    scanf("%s", key);

    for (int i = 0; i < 5; i++) {
        if (strcmp(words[i], key) == 0) {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
}

