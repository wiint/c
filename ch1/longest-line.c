#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main() {
    // This program prints the longest input line.
    // The maximum length of each line allowed is 1000.

    int len; // current line length
    int max_len = 0; // max length so far

    char line[MAX_LINE_LENGTH]; // current input line
    char longest[MAX_LINE_LENGTH]; // longest line saved

    while ((len = get_line(line, MAX_LINE_LENGTH)) > 0) {
        printf("Read line: %s\n", line);
        if (len > max_len) {
            max_len = len;
            copy(line, longest);
        }
    }

    if (max_len > 0) {
        printf("\n");
        printf("Longest line: %s\nLength: %d\n", longest, max_len);
    }

    return 0;
}

int get_line(char line[], int maxlength) {
    // Reads a line of input and stores up to maxlength - 1 characters, or until EOF or newline is encountered.
    // Ensures the string is null-terminated and includes the newline if present within the limit.
    int c, i;
    for (i = 0; i < maxlength - 1 && (c = getchar()) != EOF && c != '\n'; ++i) { // subtract 1 from maxlength for \0's place
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}