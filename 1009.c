#include <stdio.h>

int main(void)
{
	double a, b, total;
	char nome;
	
	scanf("%s", &nome);
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	printf("TOTAL = R$ %.2lf\n", total=(a + b* 0.15));
	
	return 0;
}