#include <stdio.h>
#include <math.h>

float a,b,c,aci;
main()
{
    printf("Birinci kenar giriniz = ");
    scanf("%f", &a);
    printf("Ikinci kenar giriniz = ");
    scanf("%f", &b);
    printf("Aradaki aciyi giriniz = ");
    scanf("%f", &aci);
    c = sqrt(a*a + b*b - 2 * a * b * cos(M_PI * aci / 180));
    printf("\n");
    printf("Ucuncu kenar = %0.2f", c);
    getchar();
    return 0;
    
}
