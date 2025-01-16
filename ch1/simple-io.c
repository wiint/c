#include <stdio.h>

int main() {
    int c;
    printf("Value of EOF: %d\n", EOF);
    // printf("%d\n", getchar() != EOF);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}