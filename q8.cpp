#include <stdio.h>

#define M_TO_KM 0.001

void convert() {
    static int calls = 0;
    calls++;
    printf("Function called %d times\n", calls);
}

int main() {
    convert();
    convert();
    convert();
    return 0;
}

