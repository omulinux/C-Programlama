//Girilen sayı yazı ile yazmak
#include <stdio.h>
 
int main(void) 
{
	int sayi;
 
	printf("Sayi giriniz(0<sayi<999): ");
	scanf("%d", &sayi);
 
	if (sayi > 999 || sayi < 0)
		printf("0-999 arlığında sayi giriniz\n");
	else {
		while(1) {
			switch (sayi/100) {
				case 9: printf("Dokuz yuz ");break;
				case 8: printf("Sekiz yuz ");break;
				case 7: printf("Yedi yuz ");break;
				case 6: printf("Alti yuz ");break;
				case 5: printf("Bes yuz ");break;
				case 4: printf("Dort yuz ");break;
				case 3: printf("Uc yuz ");break;
				case 2: printf("İki yuz ");break;
				case 1: printf("Yuz ");break;
			}
			sayi %= 100;
			switch (sayi/10) {
				case 9: printf( "doksan " ); 	break;
				case 8: printf( "seksen " ); 	break;
				case 7: printf( "yetmis " ); 	break;
				case 6: printf( "altmıs " ); 	break;
				case 5: printf( "elli " ); 	break;
				case 4: printf( "kırk " ); 	break;
				case 3: printf( "otuz " ); 	break;
				case 2: printf( "yirmi " ); 	break;
				case 1: printf( "on " ); 	break;
			}
			switch (sayi % 10) {
				case 9: printf( "dokuz" ); 	break;
				case 8: printf( "sekiz" ); 	break;
				case 7: printf( "yedi" ); 	break;
				case 6: printf( "alti" ); 	break;
				case 5: printf( "bes" );	break;
				case 4: printf( "dort" ); 	break;
				case 3: printf( "üc" ); 	break;
				case 2: printf( "iki" );	break;
				case 1: printf( "bir" );	break;
				}
		break;
		}
	}
 
	if (sayi == 0)
		printf("sifir");
	return 0;
}
