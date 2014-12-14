#include <stdio.h>
#include <math.h>
 
float a,b,c;
main()
{
    printf("Birinci kenar giriniz = ");
    scanf("%f", &a);
    printf("Ikinci kenar giriniz = ");
    scanf("%f", &b);
    c = sqrt(a * a + b * b);
    printf("\n");
    printf("Hipotenus = %0.2f", c);
    getchar();
    return 0;
    
}
