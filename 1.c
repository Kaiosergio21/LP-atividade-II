# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    float temperatura;

    printf("temperatura");
    scanf("%f",&temperatura);

    if (temperatura > 25)
    {
        printf("ensolarado");
    }else if(temperatura >= 15 && temperatura <= 25){

      printf("nublado");

    }else{
printf("chuvoso");

    }
    


return 0;
}