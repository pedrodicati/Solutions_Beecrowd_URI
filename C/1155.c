#include <stdio.h>

float s() {
    float total = 0.0;
    int i = 1;

    for(i; i <= 100; i++) {
        total += (1.0 / i);
    }

    return total;
}

int main(void) {
    float total = s();
    
    printf("%.2f\n", total);

    return 0;
}