#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input.");
        return 1;
    }
    if (fahrenheit < -459.67) {
        printf("Temperature is too low.");
        return 1;
    }
    if (fahrenheit > 100000000) {
        printf("Temperature is too high.");
        return 1;
    }
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    // optional: add functionality to convert Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("Invalid input.");
        return 1;
    }
    if (celsius < -273.15) {
        printf("Temperature is too low.");
        return 1;
    }
    if (celsius > 100000000) {
        printf("Temperature is too high.");
        return 1;
    }
    fahrenheit = celsius * 9 / 5 + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
