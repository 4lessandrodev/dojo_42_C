#include <stdio.h>

int	main(void)
{
	int	h;
	int	m;
	int	s;
	int	resultado;
	
	resultado = 0;

	printf("Digite o valor da hora: ");
	scanf("%d", &h);
	resultado = h * 60 *60;

	printf("Digite o valor da mintos: ");
	scanf("%d", &m);
	resultado = resultado + (m * 60);

	printf("Digite o valor da segundos: ");
	scanf("%d", &s);
	resultado = resultado + s;
	printf("O resultado é : %i,", resultado);
	return (0);
}
