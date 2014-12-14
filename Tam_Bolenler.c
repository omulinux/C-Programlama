#include <stdio.h>
#include <math.h>

int a,i;
main()
{
    printf("Tamsayi: \n");
    scanf("%u", &a);
    printf("%u tamsayisinin tam bolenleri: \n", a)
    printf("\n");
    
    for(i = 1; i <= a; i++)
    {
        if(fmod(a,i) == 0)
            printf("%u\n", i);
            
    return 0;
    
}
