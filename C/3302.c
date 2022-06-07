    #include <stdio.h>

    int main(void) {
        int i, quant_p;

        scanf("%d", &quant_p);

        for(i = 0; i < quant_p; i++) {
            int resposta;

            scanf("%d", &resposta);

            printf("resposta %d: %d\n", i + 1, resposta);
        }

        return 0;
    }