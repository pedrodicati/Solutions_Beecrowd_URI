#include <stdio.h>

int main(void) {
    double nota1, nota2;
    double media;

    scanf("%lf %lf", &nota1, &nota2);

    media = (nota1*3.5 + nota2*7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5lf\n", media);

    return 0; 
}