#include <stdio.h>

int main() {
    float s, imposto;

    printf("Salario: ");
    scanf("%f", &s);

    imposto = s * 0.275;

    printf("Imposto (27,5%%): R$ %.2f\n", imposto);

    return 0;
}