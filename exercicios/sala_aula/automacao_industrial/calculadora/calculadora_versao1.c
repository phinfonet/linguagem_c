/* Everaldo Gomes - 21/06/2012 

Calculadora

Operações:

1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
0 - Sair

*/

#include <stdio.h>

int main(){
  /* Declaração de variáveis */
  int x, y, resultado, operacao;


  do{
    puts("****Calculadora****");
    puts("1 - Soma"); 
    puts("2 - Subtração"); 
    puts("3 - Multiplicação"); 
    puts("4 - Divisão"); 
    puts("0 - Sair");
 

    scanf("%d", &operacao);

    if(operacao <= 0 || operacao > 4){
     return 0;
    }

    /* Leitura dos operandos*/
    puts("Digite os dois operandos");
    scanf("%d %d", &x, &y);

    /* Execução da operação (cálculo)*/
    if (operacao == 1) resultado = x + y;
    else if (operacao == 2) resultado = x - y;
    else if (operacao == 3) resultado = x * y;
    else if (operacao == 4) {
        if (y) resultado = x / y;
        else {
          puts("Divisao por zero");
          continue;
        }
    }
    /* Impressão do resultado */
    if(operacao) printf("Resultado = %d\n", resultado);

  } while (operacao != 0);

  return 0;
}

