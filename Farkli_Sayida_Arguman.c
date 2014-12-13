#include <stdio.h>
#include <stdarg.h>

float ortalama(const int,...);

int main()
{
    float ort=0.0;
    ort=ortalama(6,20,25,37,40,42,50);
    printf("6 sayinin ortalamasi=%f\n",ort);
    ort = ortalama(3,1,2,3);
    printf("3 sayinin ortalamasi=%f\n",ort);
    getchar();
}

float ortalama(const int adet,...)
{
      va_list argumanlar;
      int arguman,i,toplam=0;
      float ort;
      va_start(argumanlar,adet);
      for (i=0;i<adet;i++)
      {
          arguman=va_arg(argumanlar,int);
          toplam+=arguman;
      }
      va_end(argumanlar);
      ort=(float)toplam/adet;
      return ort;
}
