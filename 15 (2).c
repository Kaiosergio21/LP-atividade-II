# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){


    setlocale(LC_ALL,("portuguese"));

    int num;
    int convert;
    int soma,sub;

  
  printf("TIpo de conver��o \n\n1= milha para kilometro \n\n2 = kilometro para minha  \n\n3 = Celsius para Fahrenheit  \n\n4 = Fahrenheit para Celsius");
    scanf("%d",&convert);

  
  
    printf("digite um n�mero");
    scanf("%d",&num);

    
    switch (convert)
    {
    case 1:        

    convert = num*convert;

      printf("conver��o %d mi", convert);
    
    break;

    case 2:        

    convert = num/convert;
    
      printf("conver��o %d Km", convert);


    break;

case 3:        

  convert = (num*1.8) + 32;
     
      printf("conver��o %d C�", convert);


    break;

case 4:        

    convert = (num/1.8) + 32;
    
      printf("conver��o %d f�", convert);


    break;


    
    default:
        break;
    }

 



    return 0;
}