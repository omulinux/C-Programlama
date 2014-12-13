#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Turkish");
    float a,x,e,b,y;
    
    printf("\n Karekoku bulunacak sayi giriniz : ");
    scanf("%f", &a);
    printf("\n Tahmin kakekoku giriniz : ");
    scanf("%f", &x);
    printf("\n Kabul edilebilir hatayi giriniz : ");
    scanf("%f", &e);
    
    printf("\n\n sayi\t Tahminkok\t hata\t b\t y");
    printf("\n********************************\n");
    printf("%f\t %f\t %f\t", a,x,e);
    
A4:
    b = (a - x * x)/(2 * x);        // hata degeri olan b'yi hesapla
    y = x + b;                      // daha yakin yeni karekok degerini (y) hesapla
    printf("\n %f\t %f\t %f\t %f", x,e,b,y);
    
    if (fabs(b) <= e)
        goto A9;                    // eger mutlak(b) <= ise iterasyonu durdurmak icin A9 a git
    else
        x = y;                      // y yeni karekok degerini x degiskenine ata
        
    goto A4;
    
A9:
   printf("\n****************************");
   printf("\n\tKarekok = %f \n\n", y);  // en son hesaplanan karekok degerini (y) ekrana yaz
   system("PAUSE");
   return 0;
   
}
