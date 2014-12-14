// ozelKarakterTurleri.c

#include <stdio.h>

int main() {
    
    char yeniSatir = '\n';
    char alarm = '\a';
    char tab = '\t';
    
    printf("bu cumle iki satira %cyazilir\n", yeniSatir);
    printf("bu cumle de \niki satir halinde yazilacak");
    
    printf("\nbu cumlenin basinda ve sonunda yeni satir karakter var.\n");
    
    printf("burada bip sesi cikacak!\a \n");
    printf("bir bip sesi de burada%c var! \n", alarm);
    
    printf("bu cumle \"cift tirnak\" iceriyor! \n");
    printf("bu cumle \\ slash karakteri \\ iceriyor! \n");
    
    printf("bu cumlenin icinde\t bir tab boslu var! \n");
    printf("bu cumlenin icinde de%c bir tab bosluk var!", tab);
    
    return 0;
}

/* Aciklamalar
#include <stdio.h> = standart giris cikis kutuphanesi koda dahil ettik
C programlama da kodunuz main fonksiyon ile baslanir.
char = karakter */
