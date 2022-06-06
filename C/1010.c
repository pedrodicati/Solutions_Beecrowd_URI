#include <stdio.h>

int main(void)
{
	int codigo1, codigo2, quantidade1, quantidade2;
	double preco1, preco2, valor;
	
	scanf("%d", &codigo1);
	scanf("%d", &quantidade1);
	scanf("%lf", &preco1);
	
	scanf("%d", &codigo2);
	scanf("%d", &quantidade2);
	scanf("%lf", &preco2);
	
	valor = ((quantidade1 * preco1) + (quantidade2 * preco2));
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valor);
	
	return 0;
}