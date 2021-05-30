#include <stdio.h>
#include "calc_time.h"
// With external function

int	main(void)
{
	int	h;
	int	m;
	int	s;
	int	resultado;

	resultado = 0;
	printf("Digite o valor da hora: ");
	scanf("%d", &h);

	printf("Digite o valor da mintos: ");
	scanf("%d", &m);

	printf("Digite o valor da segundos: ");
	scanf("%d", &s);

	resultado = calc_second(h, m, s);

	printf("O resultado é : %i\n", resultado);
	return (0);
}
