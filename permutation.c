#include <stdio.h>

/* degistir fonksiyon iki pointer degistirebilmeleri icin kullanilan
bir fonksiyon */
void degistir (char *x, char *y) {
     char temp;
     temp = *x;
     *x = *y;
     *y = temp;
     }
     
/* string olarak girilen permutation hesaplanmasi icin
uc adim ve parametre alir:
1. string
2. string in ilk index i nden
3. string in son index i ne kadar. */

void permutation(char *a, int i, int n) 
{
     int j;
     if (i == n)
        printf("%s\n", a);
     else
     {
         for (j = i; j <= n; j++)
         {
             degistir((a+i), (a+j));
             permutation(a, i+1, n);
             degistir((a+i), (a+j));             // tekrarla
             }
        }
     }
             
/* Ana Modul */

int main() {
    char a[] = "ABCDEF";
    permutation(a, 0, 5);
    getchar();
    return 0;
    
}
