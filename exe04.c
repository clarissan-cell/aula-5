#include <stdio.h>

int main()
{
    float n1,n2;

    printf("Informe dois numero: ");
    scanf("%f%f", &n1,&n2);

    if(n1<n2){
     printf("%2.f e menor",n1);

    }
    if(n2<n1){
     printf("%2.f e menor",n2);   
    }
    else{
    printf("os numeros sao iguais");

    }
   
    return 0;
}