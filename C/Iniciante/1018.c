#include <stdio.h>

int main(void)
{
	int valor, a100 = 100, a50 = 50, a20 = 20, a10 = 10, a5 = 5, a2 = 2, a1 = 1, a, b, c, d, e, f, g;
	
	scanf("%d", &valor);
	
	if((0 > valor) || (valor > 1000000))
	{
		return 0;
	}
	
	a100= valor/a100;
	a = valor % 100;
	
	a50 = a/a50;
	b = a % 50;
	
	a20 = b/a20;
	c = b % 20;
	
	a10 = c/a10;
	d = c % 10;
	
	a5 = d/a5;
	e = d % 5;
	
	a2 = e/a2;
	f = e % 2;
	
	a1 = f/a1;
	g = f % 1;
	
	printf("%d\n", valor);
	printf("%d nota(s) de R$ 100,00\n", a100);
	printf("%d nota(s) de R$ 50,00\n", a50);
	printf("%d nota(s) de R$ 20,00\n", a20);
	printf("%d nota(s) de R$ 10,00\n", a10);
	printf("%d nota(s) de R$ 5,00\n", a5);
	printf("%d nota(s) de R$ 2,00\n", a2);
	printf("%d nota(s) de R$ 1,00\n", a1);
	
	return 0;
}