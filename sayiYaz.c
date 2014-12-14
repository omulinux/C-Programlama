// sayiYaz.c

#include <stdio.h>

int main() {
    int sayi = 0;
    int index = 0;
    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    do {
        index++;
        printf("%d ", index);
        }while(index < sayi);
        
    return 0;
    
}

/* Aciklamalar
do - while bir dongudur
scanf te :

%d = tamsayilar sayilar icin
%f = gercel sayilar icin
%c = karakter icin
%s = string icin
%x = 16 tabanlik sayilar icin (Hexadecimal)
