#include <stdio.h>
#include <math.h>

float a,b,c;
float x1, y1, uz;
main()
{
    printf("Dogru parametreleri :\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("Nokta koordinatlari :\n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("\n");
    if ((a * x1 + b * y1 + c) == 0)
        printf("Girilen nokta, dogru uzerindedir.");
    else
        uz = abs(a * x1 + b * y1 + c) / pow(a * a + b * b, 0.5);
        printf("Girilen nokta, dogru uzerinde degildir.\n");
        printf("Noktanin, dogruya uzakligi %0.3f birimdir.", uz);
        return 0;
        
}
    
