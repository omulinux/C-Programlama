// dizilerGiris

#include <stdio.h>

int main()
{
    int toplam1 = 0;
    int toplam2 = 0;
    int toplam3 = 0;
    int notlar[6];
    
    notlar[0] = 5;
    notlar[1] = 7;
    notlar[2] = 10;
    notlar[3] = 15;
    notlar[4] = 20;
    notlar[5] = 30;
    
    printf("0. indeks degeri = %d\n", notlar[0]);
    printf("1. indeks degeri = %d\n", notlar[1]);
    printf("2. indeks degeri = %d\n", notlar[2]);
    printf("3. indeks degeri = %d\n", notlar[3]);
    printf("4. indeks degeri = %d\n", notlar[4]);
    printf("5. indeks degeri = %d\n", notlar[5]);
    
    // 0. ve 2. indeksteki degerleri toplama
    toplam1 = notlar[0] + notlar[2];
    
    // toplami yazdir
    printf("\nToplam1 = %d\n", toplam1);
    
    // 1. ve 4. indeksteki degerleri carpma
    toplam2 = notlar[1] * notlar [4];
    
    // carpma yazdir
    printf("\nToplam2 = %d\n", toplam2);
    
    // 5. ve 3. indeksteki degerleri cikartma
    toplam3 = notlar[5] -notlar[3];
    
    // cikartma yazdir
    printf("\nToplam3 = %d\n", toplam3);
    
    return 0;
    
}
