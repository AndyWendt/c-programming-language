#include <stdio.h>

/* ### Exercise 1.5 ###
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;

    printf("%5s\t%6s\n", "Fahr", "Celc");

    for (fahr = UPPER; fahr >= LOWER; fahr = (fahr - STEP)) {
        printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}
