#include <stdio.h>

int	main(void)

{
	int	hour;
	int	minutes;
	int	seconds;
	int	result;

	printf("Digite o valor de horas: ");
	scanf("%i", &hour);
	printf("Digite o valor de minutos");
	scanf("%i", &minutes);
	printf("Digite o valor de segundos");
	scanf("%i", &seconds);
	result = hour * 60 * 60;
	result += minutes * 60;
	result += seconds;
	printf("O valor total de segundos é: %i\n", result);
}
