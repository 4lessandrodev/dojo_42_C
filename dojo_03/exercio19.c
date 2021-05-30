#include<stdio.h>

int	main(void)
{
	float	km;
	float	l;
	float	result;

	printf("Digite a distancia percorrida em km: ");
	scanf("%f", &km);
	printf("Digite a quantidade total de litros: ");
	scanf("%f", &l);
	result = km / l;
	if (result < 8)
	{
		printf("Venda o carro!");
	}
	else if (result > 8 && < 14)
	{
		printf("Economico!\n");
	}
	else if (result >= 14)
	{
		printf("Super econonico!\n");
	}
	return (0);
}
