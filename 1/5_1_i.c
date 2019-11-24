#include <stdio.h>

/* ### Chapter 1.5 ###
 * File Copying
 * https://stackoverflow.com/questions/10720821/im-trying-to-understand-getchar-eof
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
