#include <stdio.h>

int main(void)
{
	double a, b, c, media;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	media = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
	
	printf("MEDIA = %.1lf\n", media);
	
	return 0;
}