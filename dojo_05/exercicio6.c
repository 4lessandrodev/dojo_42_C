#include<stdio.h>

//prompt user for a whole number
//print a pyramid of exclamation marks starting from 1 until the whole number

int	main(void)
{
	int	quantity;
	char vector[10];
	char symbol;
	int provided_value;
	int count;

	count = 0;
	symbol = 33;
	
	printf("Informe o tamanho da pirâmide");
	scanf("%d", &quantity);
	while (quantity > 0)
	{
		//["0!"]["0!"]["!"]
		vector[count] = symbol;
		count++;
		quantity--;
		printf("%s", vector);//[!][!][!]
	}
	return (0);
}
