#include <stdio.h>

int i, N, A[100];
float T;
main()
{
    T = 0;
    printf("Dizinin eleman sayisini girin = ");
    scanf("%u", &N);
    printf("\n");
    
    for(i = 1; i <= N; i++)
    {
        printf("A(%u) = ", i);
        scanf("%d", &A[i]);
    }
    
    for(i = 1; i <= N; i++)
    {
        T = T + A[i] * A[i];
        printf("\n");
    }
    
    printf("Dizinin elemanlarinin kareleri toplamasi = %0.2f", T);
    getchar();
    return 0;
    
}
  
