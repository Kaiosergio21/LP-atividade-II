# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

 float nota;
 float soma = 0;

 float contador = 0;

 float media;

int resposta;

 

do
{

    printf("digite uma nota");
  scanf("%f",&nota);

soma+=nota;
  contador++;

  fflush(stdin);

  
  printf("gostaria de inserir mais uma nota ?\n 1 = sim 2= n�o");
  scanf("%d",&resposta);

  
 
} while (resposta != 2);



media = soma / contador;

printf("m�dia:%.1f",media);
 



    return 0;
}