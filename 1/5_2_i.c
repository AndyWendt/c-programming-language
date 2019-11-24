#include <stdio.h>

/* ### Chapter 1.5.2 ###
 * Character Counting
 * https://stackoverflow.com/questions/10720821/im-trying-to-understand-getchar-eof
 */

int main()
{
   long nc;
   nc = 0;

    while(getchar() != EOF) {
        ++nc;
    }

   printf("%ld\n", nc);
}
