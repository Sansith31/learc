#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf("%s%12s\n", "Celsius", "Fahrenheit");

    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%7.0f\t%11.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}