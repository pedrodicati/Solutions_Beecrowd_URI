#include <stdio.h>

int main()
{
	int numfun, horas;
	float valor, salario;
	
	scanf("%d", &numfun);
	scanf("%d", &horas);
	scanf("%f", &valor);
	
	salario = valor * horas;
	
	printf("NUMBER = %d\n", numfun);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
}