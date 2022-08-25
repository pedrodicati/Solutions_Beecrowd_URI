#include <stdio.h>

int main(void)
{
	double pay, new_pay;
	
	scanf("%lf", &pay);
	
	if(pay <= 400.00 && pay >= 0.00) {
		new_pay = pay * 15 / 100;
		printf("Novo salario: %.2lf\n", new_pay + pay);
		printf("Reajuste ganho: %.2lf\n", new_pay);
		printf("Em percentual: 15 %c\n", 37);
	}
	if(pay > 400.00 && pay <= 800.00) {
		new_pay = pay * 12 / 100;
		printf("Novo salario: %.2lf\n", new_pay + pay);
		printf("Reajuste ganho: %.2lf\n", new_pay);
		printf("Em percentual: 12 %c\n", 37);
	}
	if(pay > 800.00 && pay <= 1200.00) {
		new_pay = pay * 10 / 100;
		printf("Novo salario: %.2lf\n", new_pay + pay);
		printf("Reajuste ganho: %.2lf\n", new_pay);
		printf("Em percentual: 10 %c\n", 37);
	}
	if(pay > 1200.00 && pay <= 2000.00) {
		new_pay = pay * 7 / 100;
		printf("Novo salario: %.2lf\n", new_pay + pay);
		printf("Reajuste ganho: %.2lf\n", new_pay);
		printf("Em percentual: 7 %c\n", 37);
	}
	if(pay > 2000.00) {
		new_pay = pay * 4 / 100;
		printf("Novo salario: %.2lf\n", new_pay + pay);
		printf("Reajuste ganho: %.2lf\n", new_pay);
		printf("Em percentual: 4 %c\n", 37);
	}
	
	return 0;
}