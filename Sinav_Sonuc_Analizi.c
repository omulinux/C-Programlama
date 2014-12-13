#include <stdio.h>

int main() {
    /* Bildirimde degiskenlere ilk deger vermek */
    int gecenler = 0, kalanlar = 0, ogrenci = 1, sonuc;
    
    /* Sayici kontrollu donguyle 10 sonucun islenmesi */
    while (ogrenci <= 10) {
          printf("Sonucu girin(1 = gecti, 2 = kaldi): ");
          scanf("%d", &sonuc);
          
          if (sonuc == 1)                 /* if/else, while icinde yuvalanmistir. */
             gecenler = gecenler + 1;
          else
              kalanlar = kalanlar + 1;
              
          ogrenci = ogrenci + 1;
          
          }
          
    printf("Gecenler %d\n", gecenler);
    printf("Kalanlar %d\n", kalanlar);
    
    if (gecenler > 8)
       printf("Yuksek basari\n");
       
    return 0;                             /* Program basarili bir sekilde sonlanmistir */
    
}
