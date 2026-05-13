#include <stdio.h>

int main()
{
    float salario, imposto;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if(salario <= 2500)
    {
        imposto = salario * 0.15;
    }
    else
    {
        imposto = salario * 0.20;
    }

    printf("Imposto de renda: R$ %.2f\n", imposto);

    return 0;
}