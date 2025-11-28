#include <stdio.h>
#include <string.h>

void reverse(char str[], int index) {
    if (index < 0) return;       // base case
    putchar(str[index]);         // print current char
    reverse(str, index - 1);     // recursive call
}

int main() {
    char str[100];
    gets(str);
    reverse(str, strlen(str) - 1);
    return 0;
}

