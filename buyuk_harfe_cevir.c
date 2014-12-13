#include <stdio.h>
#include <ctype.h>

int main() {
    
    int c;
    for( ; ; )
    {
         c = getchar();
         if(c == EOF)
              break;
         if( islower(c))
             putchar( toupper(c));
         else if( isupper(c))
              putchar( tolower(c));
              
              }
              
    return 0;
    
}
