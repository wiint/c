#include <stdio.h>

#define IN  1 // inside a word
#define OUT 0 // outside a word

int main() {
    int c, wc, state;

    wc = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++wc;
        }
    }

    printf("\n");
    printf("Word count: %d\n", wc);

    return 0;
}