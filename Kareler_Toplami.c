#include <stdio.h>

int i, N;
float T;
main()
{
    T = 0;
    printf("N'i giriniz = ");
    scanf("%u", &N);
    for(i = 1; i <= N; i++)
        T += i * i;
        printf("\n");
    printf("1'den %d'a kadar sayilarin kareleri toplami = %0.2f", N, T);
    return 0;
    
}
