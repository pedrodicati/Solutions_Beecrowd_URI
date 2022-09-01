#include <stdio.h>

int main(void)
{
	double litros, total;
	int km;
	
	scanf("%d", &km);
	scanf("%lf", &litros);
	
	total = km / litros;
	
	printf("%.3lf km/l\n", total);
	
	return 0;
}