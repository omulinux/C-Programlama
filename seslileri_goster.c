#include <stdio.h>

main() {
 char line[80], c;
 int i;
 printf("\nString Giriniz :-");
 printf("\nEnter basladiktan sonra string ile yacagimiz isimi baslayacak ");
 printf("\nstring :-");
 gets(line);
 for(i = 0;(i <= 80 && line[i] != '\0'); i++) {
       if(line[i] == 'a' || line[i] == 'A' || line[i] == 'e' || line[i] == 'E' 
                         || line[i] == 'i' || line[i] == 'I' || line[i] == 'o' || line[i] == 'O' 
                         || line[i] == 'u' || line[i] == 'u' || line[i] == 'U')
             {             
                        printf("%c", line[i]);
                        printf(" ");
                        
             }
       }
       getchar();
}
