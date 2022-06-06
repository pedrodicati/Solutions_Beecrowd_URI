#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, y1, y2, distancia;
	
	scanf("%lf", &x1);
	scanf("%lf", &y1);
	scanf("%lf", &x2);
	scanf("%lf", &y2);
	
	distancia = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	
	printf("%.4lf\n", distancia);
	
	return 0;
}