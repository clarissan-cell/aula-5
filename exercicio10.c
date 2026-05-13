#include <stdio.h>

int main()
{
    float n1, n2, n3,n4 ,soma, media;

    printf("Digite quatro numeros nao negativos: ");
    scanf("%f %f %f %f", &n1, &n2, &n3,&n4);

    media = (n1 + n2 + n3 +n4) / 4;
    soma = n1 + n2 + n3 + n4;


    printf("soma: %.2f", soma);
    printf("Media: %.2f", media);

    return 0;
}