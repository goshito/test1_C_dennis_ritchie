#include <stdio.h>

int main() {
    int lower;
    int upper;
    int step;
    float celsius;
    float fahr;
    
    upper = 200;
    lower = 0;
    step = 20;
    celsius = lower;
    fahr = 33.8;
    while(celsius <= upper) {
        printf("Celsius: %.1f\tFahrenheit: %.1f\n", celsius, fahr);
        celsius += 20;
        fahr = celsius + 33.8;
    }
    return 0;
}