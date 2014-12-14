#include <stdio.h>

int main()
{
	float havale, komisyon;
	printf("Havale bedeli giriniz ");
	scanf("%f", &havale);

	if (havale < 100)
	{
		komisyon = havale * 0.1;
		printf("Havale miktari %fTL\n", havale);
		printf("Komisyon tutari = %fTL\n", komisyon);

		}

	else
	{
		komisyon = havale * 0.2;
		printf("Havele mikrari %fTL\n", havale);
		printf("Komisyon tutari = %fTL\n", komisyon);

		}

}
