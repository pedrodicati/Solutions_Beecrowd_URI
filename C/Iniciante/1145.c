#include <stdio.h>

int main(void) {
    int x, y;
    int contador = 0;

    scanf("%d %d", &x, &y);

    if(((x <= 0) || (x >= 21)) || ((y <= x) || (y >= 100000))) {
        return 1;
    }
    
    for(int i = 1; i <= y; i++) {
        contador++;
        
        if(contador == x) {
            printf("%d\n", i);
            contador = 0;
        }
        else {
            printf("%d ", i);
        }

    }
    
    return 0;
}