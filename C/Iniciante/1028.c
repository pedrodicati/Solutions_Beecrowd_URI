#include <stdio.h>

void pilhasIguais(int a, int b) {
    int resto = a % b;

    while(resto != 0) {
        a = b;
        b = resto;
        resto = a % b;
    }

    printf("%d\n", b);
}

int main(void) {
    int repeticoes, monteA, monteB;

    scanf("%d", &repeticoes);

    while(repeticoes > 0) {
        scanf("%d %d", &monteA, &monteB);

        if(monteB > monteA) {
            pilhasIguais(monteA, monteB);
        }
        else {
            pilhasIguais(monteA, monteB);
        }
        
        repeticoes--;
    }

    return 0;
}