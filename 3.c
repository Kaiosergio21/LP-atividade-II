# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    float nota;

    printf("sua nota");
    scanf("%f",&nota);

    if(nota >= 9){

        printf("excelente");



    }else if(nota >= 7 || nota >= 8.9 ){

printf("bom");

    }else if(nota >= 5 || nota >= 6.9){

        printf("razoável");
    }else{

 printf("insuficiente");

    }


    



    return 0;
}