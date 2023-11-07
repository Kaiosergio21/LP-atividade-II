# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    int idioma;


printf("insira o idioma das mensagens 1= inglês 2= espanhol 3= frances");
scanf("%d",&idioma);

switch (idioma)
{
case 1: 

printf("Hi sir");

    break;

case 2: 

printf("Hola senor");

case 3: 

printf("Bonjour Monsieur");



default:
    break;
}


    
return 0;

}