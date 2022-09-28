#include <stdio.h>
int main ()
{
  char operacao;
  float operando_raiz,operando1,operando2;
  float raiz,soma,subtracao,divisao,multiplicacao,potenciacao;
  
  printf("JONAS GONCALVES PLACINSCH - CIENCIA DE DADOS - UNILASALLE - 202210728\n");
  printf("\n");
  
  printf("INFORME A OPERACAO DESEJADA \n");
  printf ("PARA SOMA, UTILIZE -> +\n");
  printf ("PARA SUBTRACAO, UTILIZE -> -\n");
  printf ("PARA DIVISAO, UTILIZE -> /\n");
  printf ("PARA MULTIPLICACAO, UTILIZE -> *\n");
  printf ("PARA POTENCIACAO, UTILIZE -> ^\n");
  printf ("PARA SOMA, RAIZ QUADRADA UTILIZE -> r ou R \n");
  scanf("%c",&operacao);

  switch (operacao){
    case 'r':
      printf("INFORME O RADICANDO PARA A RAIZ:");
      scanf("%f",&operando_raiz);
        raiz=sqrt(operando_raiz);
        printf("A RAIZ QUADRADA EH: %f\n",raiz);
      break;
    case 'R':
      printf("INFORME O RADICANDO PARA A RAIZ:");
      scanf("%f",&operando_raiz);
        raiz=sqrt(operando_raiz);
        printf("A RAIZ QUADRADA EH: %f\n",raiz);
      break;
    case '+':
      printf("INFORME OS OPERANDOS PARA A SOMA \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        soma=operando1+operando2;
        printf("O RESULTADO DA SOMA EH %f",soma);
      break;
    case '-':
      printf("INFORME OS OPERANDOS PARA A SUBTRACAO: \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        subtracao=operando1-operando2;
        printf("O RESULTADO DA SUBTRACAO EH %f",subtracao);
      break;
    case '/':
      printf("INFORME OS OPERANDOS PARA A DIVISAO\n");
      printf("DIVIDENDO: ");
      scanf ("%f",&operando1);
      printf("DIVISOR: ");
      scanf ("%f",&operando2);
        if (operando2==0){
        printf("O DIVISOR NÃO PODE SER IGUAL A ZERO!\n");
        }
       else{
        divisao=operando1/operando2;
        printf("O RESULTADO DA DIVISAO EH: %f",divisao);
      }      
      break;
    case '*':
        printf("INFORME OS OPERANDOS PARA A MULTIPLICACAO: \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        multiplicacao=operando1*operando2;
        printf("O RESULTADO DA MULTIPLICACAO EH %f",multiplicacao);    
      break;
    case '^':
      printf("INFORME OS OPERANDOS PARA A POTENCIACAO\n");
      printf("BASE: ");
      scanf ("%f",&operando1);
      printf("EXPOENTE: ");
      scanf ("%f",&operando2);
        potenciacao=pow(operando1,operando2);
        printf("O RESULTADO DA POTENCIACAO EH %f",potenciacao);
      break;
    
    default:
      printf("OPERACAO INVALIDA!\n");
    
  }
  
  return 0;
}