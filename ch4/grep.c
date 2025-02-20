#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
int strindex(char source[], char term[]);

char pattern[] = "ould"; // pattern to search for

int main() {
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
        if (strindex(line, pattern) > 0) {
            printf("\n");
            printf("Pattern match found: %s\n", line);
        }
    }

    return 0;
}

/* get line into line, returns length */
int get_line(char line[], int max) {

    int c, i;
    i = 0;

    while (--max > 0 && (c = getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

/* returns the index of t in s, -1 if none */
int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
        }
        if (k > 0 && t[k] != '\0') {
            return i;
        }
    }
    return -1;
}