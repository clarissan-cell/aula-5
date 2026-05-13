#include <stdio.h>

int main()
{
    float largura, comprimento,area;

    printf("Escreva a largura e o comprimento do terreno: ");
    scanf("%f%f", &largura,&comprimento);

    area = largura * comprimento;

    printf("A area do terreno é : %2.f",area);

    return 0;
}
