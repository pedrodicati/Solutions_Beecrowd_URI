#include <stdio.h>

int main(void)
{
	double raio, volume;
	
	scanf("%lf", &raio);
	
	volume = (4.0/3) * 3.14159 * (raio*raio*raio);
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}