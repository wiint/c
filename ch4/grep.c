#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
int strindex(char source[], char term[]);

char pattern[] = "ould"; // pattern to search for

int main() {
    char line[MAXLINE];

    // while (get_line(line, MAXLINE) > 0) {
    //     printf("%s", line);
    // }
    int c = get_line(line, MAXLINE);

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

int strindex(char s[], char t[]) {
    // returns the index of t in s, -1 if none
    for (int i = 0; s[i] != '\0'; i++) {

    }
}