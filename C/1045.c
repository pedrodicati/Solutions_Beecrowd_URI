#include <stdio.h>

int main(void) {
    float a, b, c, aux;

    scanf("%f %f %f", &a, &b, &c);

    if((a > 0) && (b > 0) && (c > 0)) {
        if((a >= b) && (b >= c)) {

        }
        if((a >= c) && (c >= b)) {
            aux = b;
            b = c;
            c = aux;
        }
        if((b >= a) && (a >= c)) {
            aux = a;
            a = b;
            b = aux;
        }
        if((b >= c) && (c >= a)) {
            aux = a;
            a = b;
            b = c;
            c = aux;
        }
        if((c >= a) && (a >= b)) {
            aux = a;
            a = c;
            c = b;
            b = aux;
        }
        if((c >= b) && (b >= a)) {
            aux = a;
            a = c;
            c = aux;
        }
    }    
    
    if(a >= (b + c)) {
	    printf("NAO FORMA TRIANGULO\n");

        return 0;
	}
	if((a * a) == ((b * b) + (c * c))) {
		printf("TRIANGULO RETANGULO\n");
	}
	if((a * a) > ((b * b) + (c * c))) {
		printf("TRIANGULO OBTUSANGULO\n");
	} 
    if((a * a) < ((b * b) + (c * c))) {
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a == b && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	}
	if((((a == b) && (a != c) || (b == c) && (b != a)) || ((a == c) && (b != c)))) {
		printf("TRIANGULO ISOSCELES\n");
	}

    return 0;
}