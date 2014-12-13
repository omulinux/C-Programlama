// karakter okuma
#include <stdio.h>

int main()
{
    char karakter;
    printf("bir karakter girerek ENTER tusuna basiniz: ");
    scanf("%c", &karakter);
    
    // karakterin ASCII karsiligini yaz
    printf("%c karakter - ASCII karsiligi = %d", karakter, karakter);
    
    return 0;
    
}
