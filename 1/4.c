#include <stdio.h>

/* ### Exercise 1.4 ###
 * Write a program to print the corresponding Celsius to Fahrenheit table
 */

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;

    printf("%5s\t%6s\n", "Celc", "Fahr");
    while (celcius <= upper) {
        fahr = ((9.0/5.0) * celcius) + 32;
        printf("%5.0f\t%6.0f\n", celcius, fahr);
        celcius = celcius + step;
    }
}