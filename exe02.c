#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if(numero%2==0){
     printf("par");
    }
    else{
        printf("impar");
    }
   
    return 0;
}