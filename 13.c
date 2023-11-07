# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main (){

printf("número");

int num,num2;

printf("insira um número");
scanf("%d",&num);

fflush(stdin);

printf("insira um número");
scanf("%d",&num2);



if(num2 > num){

    printf("%d maior",num2);
      printf("%d menor",num);
}else{

printf("%d menor",num2);
      printf("%d mamior",num);


}



    return 0;

}