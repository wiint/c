#include <stdio.h>

int main() {
    // This program counts the number of occurrences of each digit,
    // white space characters (blank, tab, newline), 
    // and of all other characters.

    int c, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0']; // Convert character to corresponding numeric value before indexing
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("\n");
    printf("Digit\tCount\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d: %d\n", i, ndigit[i]);
    }
    printf("\n");

    printf("White space: %d\n", nwhite);
    printf("Others: %d\n", nother);

    return 0;
}