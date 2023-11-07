# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){

char codigo[1000];
char codigovalido[1000]="12";

do{

printf("digite o código de acesso");
scanf("%s",&codigo);

if (strcmp(codigo,codigovalido) != 0)
{
    printf("tente novamente");
}else{

    printf("código valido");
}


}while(strcmp(codigo,codigovalido) != 0);



return 0;
}