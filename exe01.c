#include <stdio.h>

int main()
{
    float n1,n2;

    printf("Informe dois numero: ");
    scanf("%f%f", &n1,&n2);

    if(n1==n2){
     printf("iguais");
    }
    else{
        printf("diferentes");
    }
   
    return 0;
}