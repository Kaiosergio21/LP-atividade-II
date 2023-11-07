# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){

    int option;

printf("----- super game ------");

printf( "opçãoes 1- novo jogo 2- carregar jogo 3-configurações");
scanf("%d",&option);

switch (option)
{
case 1:

 printf("jogo");

    break;
case 2:
printf("jogo carregado");

    break;

case 3:

printf("gráficos");
printf("som");
printf("idioma");
printf("saves");

    break;



default:
    break;
}









    return 0;

}