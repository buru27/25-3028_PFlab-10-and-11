#include <stdio.h>
#include <time.h>

int main() {
    FILE *f = fopen("log.txt", "a");
    time_t t = time(NULL);
    fprintf(f, "Program ran at: %s", ctime(&t));
    fclose(f);
}

