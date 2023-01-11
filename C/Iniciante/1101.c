#include <stdio.h>

int main(void) {
    int m, n;
    int sum = 0;

    scanf("%d %d", &m, &n);
    
    while((m > 0) || (n > 0)) {
        // inverter os valores
        if(n > m) {
            int auxiliar = m;
            m = n;
            n = auxiliar;
        }

        for(int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
        sum = 0;

        scanf("%d %d", &m, &n);
    }

    return 0;
}