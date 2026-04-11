// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>

// Function prototype
float convertTemperature(float celsius);

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit = %.2f\n", convertTemperature(celsius));

    return 0;
}

// Function definition
float convertTemperature(float celsius) {
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    return fahrenheit;
}