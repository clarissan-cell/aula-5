#include <stdio.h>

int main()
{
    float velocidade;

    printf("Informe a velocidade: ");
    scanf("%f", &velocidade);

    if(velocidade <= 80 ){
     printf("isento de multa");

    }
    if(velocidade > 81 && velocidade <= 100){
     printf("infracao leve e multa de R$ 150");
    }
    else{
     printf("infracao grave e multa de R$ 500");
    }
   
    return 0;
}
