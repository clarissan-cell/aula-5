#include <stdio.h>

int main() {
    int numero;
    int d1, d2, d3, d4;

    printf("Entre com um numero entre 0 e 9999: ");
    scanf("%d", &numero);

    
    d1 = numero / 1000;          
    d2 = (numero / 100) % 10;    
    d3 = (numero / 10) % 10;    
    d4 = numero % 10;            

    printf("Os digitos sao: %d %d %d %d\n", d1, d2, d3, d4);

    return 0;
}