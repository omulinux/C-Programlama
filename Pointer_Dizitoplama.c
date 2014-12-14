#include <stdio.h>

long int dizitopla(int A[],int elemansayisi)
{
    int *p,i;
    long int toplam=0;
    p=&A[0];
    for (i=0;i<elemansayisi;i++)
    	{
        	toplam+=*(p+i);
    	}
    return toplam;
}

int main()
{
    int dizi[]={1,2,3,4,5};
    int dizi2[]={3,3,3};
    
    printf("ilk dizi toplami = %ld\n", dizitopla(dizi,5));
    printf("ikinci dizi toplami = %ld\n", dizitopla(dizi2,3));
    
    getchar();
}
