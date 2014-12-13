#include <stdio.h>

main()
{
    float a, b, c, x;
    printf("A katsayisi = ");
    scanf("%f", &a);
    printf("B katsayisi = ");
    scanf("%f", &b);
    printf("C katsayisi = ");
    scanf("%f", &c);
    
    x = (c-b)/a;
    printf("\n");
    printf("%0.2f.x + %0.2f = %0.2f denkleminin koku = %0.3f", a, b, c, x);
    
    return 0;
    
}
