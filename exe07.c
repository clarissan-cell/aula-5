#include <stdio.h>

int main()
{
    float peso,altura, IMC;

    printf("Informe o peso e a altura: ");
    scanf("%f%f", &peso,&altura);

    IMC = peso / (altura * altura);

    if(IMC <=25 ){
     printf("peso normal");
    }
    else{
     printf("acima do peso");
    }
   
    return 0;
}