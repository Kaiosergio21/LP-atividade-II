#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){

   int numero;
    int ehPrimo = 1; 

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;  s
    } else {
        for (int i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                ehPrimo = 0;  
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("Número primo\n");
    } else {
        printf("Número não primo\n");
    }



     return 0;
}