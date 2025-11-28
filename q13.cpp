#include <stdio.h>

int main() {
    FILE *f = fopen("data.txt", "w");  
    fclose(f);

    f = fopen("data.txt", "r");
    if (fgetc(f) == EOF)
        printf("File is empty\n");
    fclose(f);
}

