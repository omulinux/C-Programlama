#include <stdio.h>
#include <math.h>

main()
{
    int a;
    printf("Tamsayiyi giriniz => ");
    scanf("%i\n", &a);
    if (floor(a/2) == (float(a)/2))
        printf("Girilen tamsayi ciftir");
    else
        printf("Girilen tamsayi tektir");
        
    return 0;
    
}
