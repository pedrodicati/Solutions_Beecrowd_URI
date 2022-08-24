#include <stdio.h>

int isTriangle(float a, float b, float c) {
    if ((a > (b - c)) && (a < (b + c)) && (b > (a - c) && (b < (a + c))) && (c > (a - b) && (c < (a + b)))) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {
    float a, b, c;
    float perimetro, area;

    scanf("%f %f %f", &a, &b, &c);

    if(isTriangle(a, b, c) == 1) {
        perimetro = a + b + c;

        printf("Perimetro = %.1f\n", perimetro);
    }
    else {
        area = ((a + b) * c) / 2;

        printf("Area = %.1f\n", area);
    }

    return 0;
}    