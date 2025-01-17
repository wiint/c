#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

void reverse(char str[]);

int main() {
    char str[] = "Hello World!";
    printf("Original: %s\n", str);
    reverse(str);
    printf("Reversed: %s\n", str);

    return 0;
}

void reverse(char str[]) {
    int len = strlen(str);
    char reversed[len + 1];

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }

    reversed[len] = '\0';

    for (int i = 0; i < len;i++) {
        str[i] = reversed[i];
    }
}