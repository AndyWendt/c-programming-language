#include <stdio.h>

/* ### Exercise 1.6 ###
 * Verify that the expression `getchar() != EOF` is 0 or 1
 *
 * Logically is true given the conditional comparison
 */


/* ### Exercise 1.7 ###
 * Write a program to print the value of EOF
 */
void print_eof()
{
    printf("foo %i", EOF);
}

int main()
{
   print_eof();
}
