#include <stdio.h>

int main()
{
    
    char ad1[]="ben";
    char ad2[]="sen";
    char ad3[]="ben";
    
    if (strcmp(ad1,ad2)==0)
    {
       printf("ad1 ve ad2 esit\n");
    }
    
    else
    {
       printf("ad1 ve ad2 esit degiller\n");
    }
    
    if (strcmp(ad1,ad3)==0)
    {
       printf("ad1 ve ad3 esit\n");
    }
    
    else
    {
       printf("ad1 ve ad3 esit degiller\n");
    }
    getchar();

}
