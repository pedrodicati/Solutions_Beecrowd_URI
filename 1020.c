#include <stdio.h>

int main(void)
{
	int dias, a, b, c, d, e;  
	
	scanf("%d", &dias);;
	
	a = dias / 365;
	b = dias % 365;
	c = b / 30;
	d = b % 30;
	e = d;
	
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", c);
	printf("%d dia(s)\n", e);
	
	return 0;
}