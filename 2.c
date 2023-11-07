#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){

  float valorCompra;
    int diaSemana;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o dia da semana (1 para segunda-feira, 7 para domingo): ");
    scanf("%d", &diaSemana);

    if (valorCompra > 100) {
        if (diaSemana >= 1 && diaSemana <= 5) {  
            valorCompra -= valorCompra * 0.10;  
        } else { 
            valorCompra -= valorCompra * 0.15;  
        }
        printf("Você ganhou um desconto!\n");
        printf("Valor com desconto: R$ %.2f\n", valorCompra);
    } else {
        printf("Sem desconto, valor da compra abaixo de R$ 100.00.\n");
    }



     return 0;
}