#include <stdio.h>
#include <math.h>

float a1, a2, b1, b2, a, b;
short sec;
main()
{
    printf("1. karmasik sayinin gercel kismi : ");
    scanf("%f", &a1);
    printf("1. karmasik sayinin sana kismi : ");
    scanf("%f", &b1);
    printf("2. karmasik sayinin gercel kismi : ");
    scanf("%f", &a2);
    printf("2. karmasik sayinin sana sayinin : );
    scanf("%f", &b2);
    printf("\n");
    
    printf("1 - Toplama\n");
    printf("2 - Cikartma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("\n");
    
    printf("Islemi seciniz -> ");
    scanf("%u", &sec);
    
    switch (sec)
    {
        case 1: 
            {a = a1 + a2; b = b1 + b2; break;}
        case 2:
            {a = a1 - a2; b = b1 - b2; break;}
        case 3:
            {a = a1 * a2 - b1 * b2; b = a1* b2 - a2 * b1; break;}
        case 4:
            {a = (a1*a2 - b1 * b2) / (a2 * a2 + b2 * b2); b = (a2 * b1 - a1 * b2)
            / (a2 * a2 + b2 * b2); break;}
    }
    
    if (b < 0)
        printf("%0.3f%0.3fi", a, b);
    else
        printf("%0.3f + %0.3fi", a, b);
    
    getchar();
    return 0;
    
}
