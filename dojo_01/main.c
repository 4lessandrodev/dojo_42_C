#include<stdio.h>

int	main(void)
{
	int		value_one = 0;
	int		value_two = 0;
	char	symbol;
	float	result = 0;

	printf("Informe o primeiro valor: ");
	scanf("%d", &value_one);
	printf("Informe o segundo valor: ");
	scanf("%d", &value_two);
	printf("Informe a operação: +, -, * ou / \n");
	scanf("%c", &symbol);
	if (symbol == '+')
	{
		result = value_two + value_one;
		printf("Soma de %d + %d é: %f", value_one, value_two, result);
	}
	if (symbol == '-')
	{
		result = value_two - value_one;
		printf("Subtração de %d - %d é: %f", value_one, value_two, result);
	}
	if (symbol == '*')
	{
		result = value_two * value_one;
		printf("Multiplicação de %d * %d é: %f",value_one, value_two, result);
	}
	if (symbol == '/')
	{
		result = value_two / value_one;
		printf("Divisão de %d / %d é: %f", value_one, value_two, result);
	}
	return (0);
}
