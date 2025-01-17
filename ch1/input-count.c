#include <stdio.h>

int main() {
    int input, num_blanks = 0, num_tabs = 0, num_lines = 0;

    while ((input = getchar()) != EOF) {
        if (input == '\n') {
            ++num_lines;
        }
        if (input == '\t') {
            ++num_tabs;
        }
        if (input == ' ') {
            ++num_blanks;
        }
    }

    printf("\n");
    printf("\n");

    printf("Blanks count: %.0d\n", num_blanks);
    printf("Tabs count: %.0d\n", num_tabs);
    printf("Line count: %.0d\n", num_lines);

    return 0;
}