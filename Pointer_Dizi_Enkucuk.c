#include <stdio.h>
#include <stdlib.h>

int* enkucugun_adresi(int A[],int n)
{
     
     int enkucuk, *p, i;
     enkucuk = A[0];
     p = &A[0];
     for(i=1;i<n;i++)
     {
          if (A[i]<enkucuk) 
          {
              enkucuk=A[i];
              p=&A[i];
          }
     }
     
     return p;
}

int main()
{
    
    int dizi[]={20,15,5,3,32};
    int *q;
    
    q = enkucugun_adresi(dizi,5);
    printf("en kucuk eleman = %d",*q);
    getchar();
}
