#include <stdio.h>

#define IN  1   // Inside a word
#define OUT 0   // Outside a word

int main() {
    int c;         // Current character
    int state = OUT; // Tracks whether inside or outside a word

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                putchar('\n');  // End the current word
                state = OUT;
            }
        }
        else if (state == OUT) {
            state = IN;         // Start of a new word
        }

        if (state == IN) {
            putchar(c);         // Print characters of the word
        }
    }

    return 0;
}
