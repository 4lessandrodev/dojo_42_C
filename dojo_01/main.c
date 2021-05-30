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
	printf("Informe a operação: +, -, * ou / \n");
	scanf(" %c", &symbol);
	if (symbol == '+')
	{
		result = value_two + value_one;
		printf("Soma: %.2f \n", result);
	}
	if (symbol == '-')
	{
		result = value_two - value_one;
		printf("Subtração: %.2f \n", result);
	}
	if (symbol == '*')
	{
		result = value_two * value_one;
		printf ("Multiplicação: %.2f \n", result);
	}
	if (symbol == '/')
	{
		result = value_two / value_one;
		printf("Divisão: %.2f \n", result);
	}
	return (0);
}
