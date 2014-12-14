#include <stdio.h>

int faktoriyel (int sayi)
{
        if (sayi == 1 || sayi == 0)
                return 1;
        else
                return sayi * faktoriyel(sayi - 1);
}

int main(void)
{
        printf("%d", faktoriyel(5));
        return 0;
}
