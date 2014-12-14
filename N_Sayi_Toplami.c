#include <stdio.h>          // standart giris cikis icin
#include <locale.h>         // setlocale() bulundugu ulkenin dili
#include <stdlib.h>         // standart kutuphanesi

int veri ();
float hesapla (int);
void yaz (float);
int sayi;

main()                                  // Ana Fonksiyonumuz
{
    setlocale(LC_ALL, "Turkish");       // Turkce karakter destegi saglaniyor
    
    int n;
    float toplam;
    n = veri();
    toplam = hesapla(n);
    yaz(toplam);
}

int veri()                              // Veri Fonksiyon
{
    printf("\n 1'den N'ye kadar olan tamsayilarin toplamini bulma program\n\n");
    printf("N degerini giriniz : ");
    scanf("%u", &sayi);
    
    return sayi;
}

float hesapla (int n)                    // Hesapla Fonksiyon
{
    int i;
    float t = 0;
    for(i = 1; i <= n; i++)
        t += i;
        
    return t;
}

void yaz (float toplam)                 // Yaz Fonksiyon
{
    printf("\n");
    printf("Sonuc = %0.0f", toplam);
    
    getchar();
}
