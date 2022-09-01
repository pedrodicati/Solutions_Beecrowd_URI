#include <stdio.h>

int main(void)
{
	int h_init, h_end, h_total;
	
	scanf("%d %d", &h_init, &h_end);
	
	h_total = h_end - h_init;
	
	if(h_total <= 0) {
		h_total = 24 + (h_end - h_init);
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", h_total);
	
	return 0;
}