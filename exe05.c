
int main()
{
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if(numero%3==0){
     printf("multiplo de 3");
    }
    else{
     printf("nao multiplo de 3");
    }
   
    return 0;
}