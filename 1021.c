#include <stdio.h>

int main(void)
{
	double valor;
	
	scanf("%lf", &valor);
	
	int valor_notas, valor_moedas, aux;
	
	int a100, a50, a20, a10, a5, a2;
	
	int a1, a05, a025, a01, a005, a001;
	
	int a, b, c, d, e, f, g, h, i, j, k;
	
	valor_notas = valor;
	
	valor_moedas = valor * 100;
	
	aux = valor_notas * 100;
	
	valor_moedas = valor_moedas - aux;
	
	a100 = valor_notas / 100.0;
	a = valor_notas % 100;
	
	a50 = a / 50;
	b = a % 50;
	
	
	a20 = b / 20;
	c = b % 20;
	
	a10 = c / 10;
	d = c % 10;
	
	a5 = d / 5;
	e = d % 5;
	
	a2 = e / 2;
	f = e % 2;
	
	a1 = f / 1;
	
	a05 = valor_moedas / 50;
	h = valor_moedas % 50;
	
	a025 = h / 25;
	i = h % 25;
	
	a01 = i / 10;
	j = i % 10;
	
	a005 = j / 5;
	k = j % 5;
	
	a001 = k / 1; 
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", a100);
	printf("%d nota(s) de R$ 50.00\n", a50);
	printf("%d nota(s) de R$ 20.00\n", a20);
	printf("%d nota(s) de R$ 10.00\n", a10);
	printf("%d nota(s) de R$ 5.00\n", a5);
	printf("%d nota(s) de R$ 2.00\n", a2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", a1);
	printf("%d moeda(s) de R$ 0.50\n", a05);
	printf("%d moeda(s) de R$ 0.25\n", a025);
	printf("%d moeda(s) de R$ 0.10\n", a01);
	printf("%d moeda(s) de R$ 0.05\n", a005);
	printf("%d moeda(s) de R$ 0.01\n", a001);
	
	return 0;
}