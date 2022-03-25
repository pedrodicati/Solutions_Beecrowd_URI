#include <stdio.h>

int main(void)
{
	double l, v, h;
	
	scanf("%lf", &h);
	scanf("%lf", &v);
	
	l = (h * v) / 12;
	
	printf("%.3lf\n", l);
	
	return 0;
}