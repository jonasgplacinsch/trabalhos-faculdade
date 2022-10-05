#include <stdio.h>
int main ()
{
  char operacao;
  float operando_raiz,operando1,operando2;
  float raiz,soma,subtracao,divisao,multiplicacao,potenciacao;

  
  printf("JONAS GONCALVES PLACINSCH - CIENCIA DE DADOS - UNILASALLE - 202210728\n");
  printf("https://github.com/jonasgplacinsch/trabalhos-faculdade/blob/main/algoritmos_prog_c.c");
  
  printf(" \n");

  //LINHAS 14 A 20 SOLICITO AO USUÁRIO QUAL É A OPERAÇÃO QUE DESEJA REALIZAR
  
  printf ("INFORME A OPERACAO DESEJADA \n");
  printf ("PARA SOMA, UTILIZE -> +\n");
  printf ("PARA SUBTRACAO, UTILIZE -> -\n");
  printf ("PARA DIVISAO, UTILIZE -> /\n");
  printf ("PARA MULTIPLICACAO, UTILIZE -> *\n");
  printf ("PARA POTENCIACAO, UTILIZE -> ^\n");
  printf ("PARA SOMA, RAIZ QUADRADA UTILIZE -> r \n");
  scanf("%c",&operacao);

  //APÓS A ESCOLHA DA OPERAÇÃO, O USUÁRIO É DIRECIONADO PARA INFORAR A QUANTIDADE DE OPERANDOS
  switch (operacao){
 
    //SE O DESEJO FOR RAIZ, O USUARIO PODE ESCREVER 'R' OU 'r' QUE O SISTEMA IRÁ EXECUTAR A OPERACAO
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

    //SE O USURIO QUISER UMA SOMA, NECESSARIO INFORMAR '+'
    //O SISTEMA IRA SOLICITAR 2 OPERANDOS PARA REALIZAR O CALCULO
    case '+':
      printf("INFORME OS OPERANDOS PARA A SOMA \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        soma=operando1+operando2;
        printf("O RESULTADO DA SOMA EH %f",soma);
      break;

    //SE O USURIO QUISER UMA SUBTRACAO, NECESSARIO INFORMAR '-'
    //O SISTEMA IRA SOLICITAR 2 OPERANDOS PARA REALIZAR O CALCULO
    case '-':
      printf("INFORME OS OPERANDOS PARA A SUBTRACAO: \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        subtracao=operando1-operando2;
        printf("O RESULTADO DA SUBTRACAO EH %f",subtracao);
      break;

    //SE O USURIO QUISER UMA DIVISAO, NECESSARIO INFORMAR '/'
    //O SISTEMA IRA SOLICITAR O DIVISOR E O DIVIDENDO PARA REALIZAR A OPERACAO
    case '/':
      printf("INFORME OS OPERANDOS PARA A DIVISAO\n");
      printf("DIVIDENDO: ");
      scanf ("%f",&operando1);
      printf("DIVISOR: ");
      scanf ("%f",&operando2);

      //VALIDACAO DO SISTEMA NO CASO DE UM DIVISOR SER IGUAL A 0
        if (operando2==0){
        printf("O DIVISOR NÃO PODE SER IGUAL A ZERO!\n");
        }
       else{
        divisao=operando1/operando2;
        printf("O RESULTADO DA DIVISAO EH: %f",divisao);
      }      
      break;

    //SE O USURIO QUISER UMA MULTIPLICACAO, NECESSARIO INFORMAR '*'
    //O SISTEMA IRA SOLICITAR 2 OPERANDOS PARA REALIZAR O CALCULO
    case '*':
        printf("INFORME OS OPERANDOS PARA A MULTIPLICACAO: \n");
      printf("OPERANDO 1: ");
      scanf ("%f",&operando1);
      printf("OPERANDO 2: ");
      scanf ("%f",&operando2);
        multiplicacao=operando1*operando2;
        printf("O RESULTADO DA MULTIPLICACAO EH %f",multiplicacao);    
      break;

    //SE O USURIO QUISER UMA POTENCICAO, NECESSARIO INFORMAR '^'
    //O SISTEMA IRA SOLICITAR A BASE E O EXPOENTE PARA REALIZAR O CALCULO
    case '^':
      printf("INFORME OS OPERANDOS PARA A POTENCIACAO\n");
      printf("BASE: ");
      scanf ("%f",&operando1);
      printf("EXPOENTE: ");
      scanf ("%f",&operando2);
        potenciacao=pow(operando1,operando2);
        printf("O RESULTADO DA POTENCIACAO EH %f",potenciacao);
      break;

    //SE O USUARIO DIGITAR UM CODIGO INVALIDO DE OPERACAO
    default:
      printf("OPERACAO INVALIDA!\n");

  }
  
}