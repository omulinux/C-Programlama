// matematikFonksiyonlari

#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int j = 0;
    int secim = 0;
    
    // menu ciz
    menu();
    
    printf("\nSeciminizi yapiniz (1-5) = ");
    scanf("%d", &secim);
    
    switch(secim) {
                  case 1:
                        printf("iki sayi giriniz = ");
                        scanf("%d%d", &i,&j);
                        printf("min = %d", min(i,j));
                        break;
                        
                  case 2:
                       printf("iki sayi giriniz = ");
                       scanf("%d%d", &i, &j);
                       printf("max = %d", max(i,j));
                       break;
                       
                  case 3:
                       printf("bir sayi giriniz = ");
                       scanf("%d", &i);
                       printf("karesi = %d", kare(i));
                       break;
                       
                  case 4:
                       printf("bir sayi giriniz = ");
                       scanf("%d", &i);
                       printf("kupu = %d", kupu(i));
                       break;
                       
                  case 5:
                       printf("bir sayi giriniz = ");
                       scanf("%d", &i);
                       printf("mutlak degeri = %d", mutlak(i));
                       break;
                       
                  default:
                          printf("1 - 5 arasinda bir deger secmelisiniz!! ");
                          
                          }
                          
                  return 0;
                  
                  }
                  
menu()

{
         printf("\n");
         printf("@@@@@@@@@@@@@\n");
         printf("     MENU    \n");
         printf("@@@@@@@@@@@@@\n");
         
         printf("\n\n");
         printf("1. minimum  bulma\n");
         printf("2. maksimum bulma\n");
         printf("3. kare     alma\n");
         printf("4. kupu     bulma\n");
         printf("5. mutlak degeri bulma\n");
         
         
         }
         
    int min(int a, int b)
    {
        if(a<b)
        {
                return a;
                }
                     return b;
                     }
                     
    int max(int a, int b)
    {
        if(a>b) 
        {
                return a;
                }
                
                     return b;
                     }
                     
    int kare(int a)
    {
        return a * a;
        }
        
    int kupu(int a)
    {
        return a * a * a;
        }
        
    int mutlak(int a)
    {
        if(a<0)
        {
               return a * (-1);
               }
                    return a;
    }
