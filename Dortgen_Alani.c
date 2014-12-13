#include <stdio.h>
#include <math.h>

float e,f,aci,Alan;
main()
{
    printf("Birinci kenar giriniz = ");
    scanf("%f", &e);
    printf("Ikinci kenar giriniz = ");
    scanf("%f", &f);
    printf("Aradaki aciyi giriniz = ");
    scanf("%f", &aci);
    Alan = e * f * sin(M_PI * aci / 180)/2;
    printf("\n");
    printf("Dortgenin Alani = %0.2f", Alan);
    getchar();
    return 0;
    
}
