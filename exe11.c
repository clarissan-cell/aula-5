#include <stdio.h>

int main()
{
    float a,b,c;

    printf("Informe numeros para formar um triangulo: ");
    scanf("%f%f%f", &a,&b,&c);

    if(a < b + c && b < a + c && c < a + b){
        printf("Os numeros formam um triangulo\n");

        if (a == b && b == c) {
            printf("Triangulo Equilatero");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles");
        }
        else {
            printf("Triangulo Escaleno");
        }
    }
    else{
        printf("Os numeros nao formam um triangulo");
    }

    return 0;
}