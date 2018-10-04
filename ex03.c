#include <stdio.h>
#include "funcs.h"

int main()
{
    int option, number, result, exponent;
    printf("Informe um numero: ");
    scanf("%d", &number);
    printf("Digite 1 para fatorial e 2 para exponenciacao: ");
    scanf("%d", &option);
    if (option == 1) {
        result = fatorial(number);
    } else if (option == 2) {
        printf("Informe o expoente: ");
        scanf("%d", &exponent);
        result = exponentiation(number, exponent);
    } else {
        printf("Opcao invalida.");
        return 1;
    }
    printf("Resultado: %d", result);
    return 0;
}
