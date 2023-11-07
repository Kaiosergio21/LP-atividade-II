# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    int num,num2;
    int conta;
    int soma,sub;

    printf("digite um número");
    scanf("%d",&num);

    

printf("digite um número");
    scanf("%d",&num2);


    printf("Operação de sua escolha 1= soma 2 = subtração");
    scanf("%d",&conta);

      fflush(stdin);


    switch (conta)
    {
    case 1:        

    conta = num + num2;

      printf("soma %d\n", conta);
    
    break;

    case 2:        

    conta = num - num2;
    
      printf("subtração %d\n", conta);


    break;


    
    default:
        break;
    }

 



    return 0;
}