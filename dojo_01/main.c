#include<stdio.h>

int	main(void)
{
	int		value_one;
	int		value_two;
	char	symbol;
	float	result;

	printf("Informe o primeiro valor: ");
	scanf("%d", &value_one);
	printf("Informe o segundo valor: ");
	scanf("%d", &value_two);
	printf("Informe a operação: +, -, * ou /");
	scanf("%c", &symbol);
	if (symbol == '+')
	{
		result = value_two + value_one;
		printf("Soma de %d + %d é: %f", value_one, value_two, result);
	}
	return (0);
}
