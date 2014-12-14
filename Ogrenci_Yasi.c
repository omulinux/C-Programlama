#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int yas;
    
    printf("Ogrencinin yasi?: ");
    scanf("%d", &yas);
    printf("\n");
    
    if ((yas >= 1) && (yas <= 3))
        printf("Yusuf Hoca");
    else if (yas == 4)
        printf("Mustafa Hoca");
    else if (yas == 5)
        printf("Mehmet hoca");
    else if ((yas < 1) || (yas > 6))
        printf("Bu yas icin ogretmen yok");
        
    getchar();
    return 0;
    
}
