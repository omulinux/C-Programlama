#include <stdio.h>
#include <math.h>

int i, j, N, s, e;
float d;
main()
{
    printf("Ust sinir = ");
    scanf("%d", &N);
    printf("\n");
    
    printf("+++ Asal Sayilar +++\n\n");
    for(i = 2; i <= N; i++)
    {
        s = 0;
        for(j = 1; j <= i; i++)
        {
            d = (float)i / j;
            e = ceil(i/j);
            if (d == e)
                s++;
                
        }
        
        if (s == 2)
            printf("%d", i);
            
    }
    
    return 0;
    
}
