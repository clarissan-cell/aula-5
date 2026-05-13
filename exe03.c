#include <stdio.h>

int main()
{
    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);
    
    if(numero >=20 && numero <=90 ){
     printf("pertence ao intervalo");
    }
    else{
        printf("nao pertence");
    }
   
    return 0;
}