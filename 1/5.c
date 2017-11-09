#include <stdio.h>

/* ### Exercise 1.5 ###
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 */

main()
{
    int fahr;

    printf("%5s\t%6s\n", "Fahr", "Celc");

    for (fahr = 300; fahr >= 0; fahr = (fahr - 20)) {
        printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}
