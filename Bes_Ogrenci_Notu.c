#include <stdio.h>
#include <stdlib.h>

int main()
{
	int not;
	char notch[5];
	printf("Ogrencinin notu nedir ? ");
	fgets(notch, 5, stdin);
	not = atoi(notch);

	if (not >= 60)
		printf("Basarili\n");
		printf("Notunuz %d dir.\n", not);
	else
		printf("Basarisiz\n");
		printf("Daha cok calismaniz lazim");

	return 0;

}
