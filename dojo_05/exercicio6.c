#include<stdio.h>

//prompt user for a whole number
//print a pyramid of exclamation marks starting from 1 until the whole number

int	main(void)
{
	int		quantity;
	char	vector[1];
	char	symbol;
	int		provided_value;
	int		count;

	count = 0;
	quantity = 9;
	symbol = '!';
	printf("Informe o tamanho da pirâmide\n");
	scanf("%d", &quantity);
	if (quantity >= 11)
	{
		printf("Tamanho maximo da piramide é 10\n");
		return(0);
	}
	while (quantity > 1)
	{
		vector[count] = symbol;
		count++;
		quantity = quantity - 1;
		printf("%s\n", vector);
	}
	return (0);
}
