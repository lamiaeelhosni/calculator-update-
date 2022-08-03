#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a, b;
  char op;

  do{
  printf("Enter an operator (+ - * /) ou q pour arreter ");
  scanf("\n%c",&op);
  if(op!='q'){
  printf("entre numbre ");
  scanf("%f",&a);
  printf("entre numbre ");
  scanf("%f",&b);
    switch (op){
    case '+':
      printf("%.2f + %.2f = %.2f \n", a,b,a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f \n", a,b,a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f \n", a,b,a * b);
      break;
    case '/':
        if(b!=0){
           printf("%.2f / %.2f = %.2f \n", a,b,a / b);
        }else{
            printf("number diviseur doit etre superieur a 0\n");
        }
      break;
     default:
      printf("Erreur! l'operateur n est pas correct \n");
      break;
  }
  }else{
    exit(0);
  }

  }while(op!='q');
}
