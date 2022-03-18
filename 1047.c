#include <stdio.h>

int main(void) {
    int hora_inicial, hora_final;
    int minuto_inicial, minuto_final;
    int conta_horas = 0, conta_minutos = 0;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);

    printf("Minuto inicial: ");
    scanf("%d", &minuto_inicial);

    printf("\nHora final: ");
    scanf("%d", &hora_final);

    printf("Minuto final: ");
    scanf("%d", &minuto_final);
    
    if (hora_inicial == hora_final && minuto_inicial == hora_final) {
        conta_horas = 24;
        conta_minutos = 0;
    }
    else {
        for (int i = hora_inicial; i != (hora_final - 1); i++, conta_horas++) {
            if (i == 24)
                i = 0;
        }

        for (int i = minuto_inicial; i != minuto_final; i++, conta_minutos++) {
            if (i == 60) {
                i = 0;
            }
        }
    }

    if (conta_minutos >= 60) {
        conta_minutos -= 60;
        conta_horas += 1;
    }

    printf("\nO JODO DUROU %d HORA(S) E %d MINUTO(S)\n", conta_horas, conta_minutos);

    return 0;
}