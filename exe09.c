// Um cofre eletrônico exige uma senha de 4 dígitos. Além da senha correta (ex: 2024),
// o usuário deve fornecer um "código de segurança" que é o resultado da soma dos dois
// primeiros dígitos da senha. Escreva um programa que leia a senha e o código de segu-
// rança, informando se o cofre foi "Aberto", se a "Senha está incorreta" ou se o "Código de
// segurança é inválido"
#include <stdio.h>

int main()
{
    int senha, codigo;
    int d1, d2, soma;

    printf("digite a senha de 4 digitos: ");
    scanf("%d", &senha);

    printf("digite o codigo de seguranca: ");
    scanf("%d", &codigo);

    if (senha != 1995) {
        printf("senha incorreta");
    } else {
        d1 = senha / 1000;
        d2 = (senha / 100) % 10;
        soma = d1 + d2;
        if (soma == codigo) {
            printf("acesso permitido");
        } else {
            printf("codigo invalido");
        }
    }

    return 0;
}
