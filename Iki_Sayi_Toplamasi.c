#include <stdio.h>

int main()
{
    int tamsayi1, tamsayi2, toplam;         /* bildirme */
    
    printf("Ilk tamsayiyi giriniz\n");      /* mesaj yazdirma */
    scanf("%d", &tamsayi1);                 /* ilk tamsayinin okunmasi */
    printf("Ikinci tamsayiyi giriniz\n");   /* mesaj yazdirma */
    scanf("%d", &tamsayi2);                 /* ikinci tamsayinin okunmasi */
    
    toplam = tamsayi1 + tamsayi2;           /* toplamin atanmasi */
    printf("Toplam %d dir\n", toplam);      /* toplamin yazdirilmasi */
    
    return 0;                               /* programin basariyla sona erdigini belirtmek */
    
}
