#include <stdio.h>

/* ### Chapter 1.5 ###
 * File Copying
 */

int main()
{
   int c;

   c = getchar();
   while(c != EOF) {
       putchar(c);
       c = getchar();
   }
}
