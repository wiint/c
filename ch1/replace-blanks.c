#include <stdio.h>

int main() {
    // This program replaces one or more blanks from input
    // by a single blank

    int c;
    int is_blank = 0;

    printf("Enter text (Ctrl+D to end input on Unix, Ctrl+Z on Windows):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!is_blank) {
                putchar(c);
                is_blank = 1;
            }
        }
        else {
            putchar(c);
            is_blank = 0;
        }
    }

    return 0;
}
