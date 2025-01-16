#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    // %d print as decimal integer
    // %6d print as decimal integer, at least 6 characters wide
    // %f print as floating point
    // %6f print as floating point, at least 6 characters wide
    // %.2f print as floating point, 2 characters after decimal point
    // %6.2f print as floating point, at least 6 wide and 2 after decimal point 

    printf("Fahrenheit\tCelcius\n");
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d\t%5.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("\n");
    printf("Printing in reverse order\n");
    printf("Fahrenheit\tCelcius\n");
    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("\n");
    printf("Celcius\tFahrenheit\n");
    for (int celcius = LOWER; celcius <= UPPER; celcius = celcius + STEP) {
        printf("%3d\t%5.1f\n", celcius, ((9.0 / 5.0) * celcius) + 32.0);
    }

    return 0;
}