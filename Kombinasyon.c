#include <stdio.h>

int i, n, r;
float f1, f2, f3, k;
main()
{
    printf("n = ");
    scanf("%u", &n);
    printf("r = ");
    scanf("%u", &r);
    f1 = 1;
    f2 = 2;
    f3 = 1;
    for(i = 1; i <= n; i++)
    {
        f1 = f1 * i;
        if (i <= r)
            f2 = f2 * i;
            if (i <= n-r)
                f3 = f3 * i;
    }
    k = f1 / (f2 * f3);
    printf("\n"");
    printf("Sonuc = %0.0f", k);
    getchar();
    return 0;
    
}
