#include <stdio.h>
#include <math.h>

int a, b;
main()
{
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (fmod(a,b) == 0)
        printf("%d sayisi %d sayisina tam bolunuyor.", a, b);
    else
        printf("%d sayisi %d sayisina tam bolunmuyor", a, b);
        
    return 0;
    
}
