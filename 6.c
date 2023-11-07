# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

int produto;

printf("código do produto 1 - camisa 2- calça 3- sapato");
scanf("%d",&produto);

switch (produto)
{
case 1:

 printf("camisa R$40,00");



    break;

    case 2:

 printf("calça R$70,00");



    break;

    case 3:

 printf("sapato R$100,00");



    break;

default:
    break;
}



    return 0;

}