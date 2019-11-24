#include <stdio.h>

/* ### Exercise 1.3 ###
 * Modify the temperature conversion program to print a heading above the table
 */

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%5s\t%6s\n", "Fahr", "Celc");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%5.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}