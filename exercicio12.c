#include <stdio.h>

int main() {
    
    float salarioMinimo, salarioFuncionario, resultado;

    printf("Digite o valor do salario minimo atual: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salarioFuncionario);

    resultado = salarioFuncionario / salarioMinimo;

    printf("\nO funcionario ganha o equivalente a %.2f salarios minimos.\n", resultado);

    return 0;
}