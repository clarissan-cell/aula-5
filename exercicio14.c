#include <stdio.h>
#include <string.h>

int main() {
    
    double a = 3.0;
    int b = 2;
    char *nome = "MIRIAM";
    char *profissao = "ADVOGADO";

    
    int res1 = (a + 1 >= b * b);
    int res2 = (strcmp(nome, "ANA") != 0);
    int res3 = (strcmp(profissao, "medico") == 0);

    
    printf("Resultado 1: %d\n", res1);
    printf("Resultado 2: %d\n", res2);
    printf("Resultado 3: %d\n", res3);

    return 0;
}