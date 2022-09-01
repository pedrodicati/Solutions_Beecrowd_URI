#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, float nota4) {
    float resultado;

    resultado = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / (2 + 3 + 4 + 1);

    return resultado;
}

int main(void) {
    float nota1, nota2, nota3, nota4;
    float resultado = 0;

    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    resultado = calculaMedia(nota1, nota2, nota3, nota4);

    printf("Media: %.1f\n", resultado);

    if(resultado >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if(resultado < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");

        float exame;

        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);

        resultado = (resultado + exame) / 2;

        if (resultado >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", resultado); 
    }

    return 0;
}