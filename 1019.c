#include <stdio.h>

int main(void)
{
	int s, a, b, c;  
	
	scanf("%d", &s);

	c = s / 3600;
	
	int d, e;
	
	d = s % 3600;
	a = d / 60;
	e = d % 60;
	b = e;
	
	printf("%d:%d:%d\n", c, a, b);
	
	return 0;
}