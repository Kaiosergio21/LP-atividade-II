# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    int num;
    int contador = 0;
    int res;

    do
    {
      
      printf("número");
     scanf("%d",&num);
     contador++;

     fflush(stdin);

     printf("inseirir mais um número ? 1 = sim, 2 =não");
     scanf("%d",&res);

     
              
        
    } while (res != 2 );
    

     
     



    return 0;
}