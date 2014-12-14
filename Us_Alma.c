#include <stdio.h>

main()
{
    int x, y, i;
    float F;
    printf("Ussu alinacak sayiyi giriniz = ");
    scanf("%u", &x);
    printf("Sayinin kacinci ussu alinacak ?");
    scanf("%u", &y);
    F = 1;
    for(i = 1; i <= y; i++)
    {
        F = F * x;
    }
    
    printf("\nSonuc = %0.0f\n", F);
    return 0;
    
}
