#include <stdio.h>

int main(void) {
    int codigo, quantidade;
    float total;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        total = quantidade * 4.0;
        break;

    case 2:
        total = quantidade * 4.5;
        break;
    
    case 3:
        total = quantidade * 5.0;
        break;

    case 4:
        total = quantidade * 2.0;
        break;
    
    case 5:
        total = quantidade * 1.5;
        break;

    default:
        break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}