#include <stdio.h>
#include <math.h>

int a, b, h, d;
float c;
main()
{
    printf("Belirtilen araliktaki Dik Ucgen bulan program\n\n");
    printf("Maksimum hipotenus uzunlugu => ");
    scanf("%d", &h);
    printf("\n");
    
    printf("<<< Dik Ucgenler >>>\n");
    printf("\n");
    
    for(a = 1; a <= h; a++)
    {
        for(b = a; b <= h; b++)
        {
            c = sqrt(a*a + b*b);
            d = ceil(c);
            if ((c <= h) && (d == c))
                printf("%d-%d-%d\n", a, b, d);
        }
    }
    
    getchar();
    return 0;
    
}
