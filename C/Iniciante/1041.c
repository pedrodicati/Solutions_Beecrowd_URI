#include <stdio.h>

int main(void) {
    float eixoX, eixoY;

    scanf("%f %f", &eixoX, &eixoY);

    if((eixoX > 0) && (eixoY > 0)) {
        printf("Q1\n");
    }
    else if((eixoX < 0) && (eixoY > 0)) {
        printf("Q2\n");
    }
    else if((eixoX < 0) && (eixoY < 0)) {
        printf("Q3\n");
    }
    else if((eixoX > 0) && (eixoY < 0)) {
        printf("Q4\n");
    }
    else if((eixoX == 0) && (eixoY != 0)) {
        printf("Eixo Y\n");
    }
    else if((eixoX != 0) && (eixoY == 0)) {
        printf("Eixo X\n");
    }
    else if((eixoX == 0) && (eixoY == 0)) {
        printf("Origem\n");
    }
    
    return 0;
}