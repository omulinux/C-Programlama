1. Break Ornek
int main()

{
    int i=0;
    for(;i<10;i++)
    {
         if(i==6) break;
         printf("i=%d\n",i);
    }
}

2. Continue Ornek
int main()
{
    int i=0;
    for(;i<10;i++)
    {
          if (i==6) continue;
          printf("i=%d\n",i);
    }
}

3. Do - While Ornek
int main()
{
    int sayi;
    do{
       printf("Bir sayi giriniz:");
       scanf("%d",&sayi);
       printf("sayi=%d , karesi=%d\n",sayi,sayi*sayi);
    }while(sayi>0);    
}

4. For Ornek
int main()
{
    int i;
    int x,y;
    for(i=0; i<100; i+=5)
    {
       printf("sayac=%d\n",i);
    }
    for(x=0, y=x; x+y<10; x++, y=x+1)
    {
        printf("x=%d,y=%d\n",x,y);
    }
}

5. If Ornek
const int parola = 1234;
int main()
{
    int giris;
    printf("Parola sayisini giriniz:");        
    scanf("%d",&giris);
    if (giris==parola)
    {
       printf("parola dogru");                   
    }
    else
    {
       printf("parola yanlis");      
    }
}

6. Switch Ornek
int main()
{
    char kr;
    printf("1-oku, 2-yaz, 3-degistir \n");    
    printf("seceneginiz:");
    kr=getchar();
    switch(kr)
    {
        case '1':printf("OKU\n");break;
        case '2':printf("YAZ\n");break;
        case '3':printf("DEGISTIR");break;
        default: printf("Bilinmeyen secenek");
    }
}

7. While Ornek
int main()
{
    int sayac=0;
    while(sayac<=20)
    {
         printf("i=%d",sayac++);
    }    
}
