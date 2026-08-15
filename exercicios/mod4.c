#include <stdio.h>
#include <stdlib.h>

int main(){
    //definição das variaveis do tipo ponteiro
    int numero =10;
    int *ponteiroInt = &numero;//ponteiro recebe o endereço de numero
    //exibindo o valor e o endereço da variavel 'numero'usando ponteiros
    printf("valor de mumero :%d\n",numero);
    printf("endereço de numeo:%p\n",ponteiroInt);
    printf("valor apontado pelo ponteiro:%d\n",*ponteiroInt);

    //alterando o valor da variavel 'numero' usando ponteiros
    *ponteiroInt = 20;
    printf("novo valor de numero:%d\n",numero);

    //caracteristicas especificas dos ponteiros
    //alocação dinamicas de memoria com malloc
    int *ponteiroDinamico;
     ponteiroDinamico =(int*)malloc(sizeof(int));//alocando memoria dinamicamente para um inteiro
      if (ponteiroDinamico == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;// sai do programa se alocação falhar
    }
    //inicializando o valor alocado dinamicamente e exibindo
    *ponteiroDinamico = 50;
    printf("valor armazenado na memoria alocado dinamicamente:%d\n",*ponteiroDinamico);
    //uso correto dos ponteiros na programação em C, liberando a memoria alocada dinamicamente
    // exemplo de uso seguro de ponteiro om verificaçao e liberação de memória
    free(ponteiroDinamico);//liberando a memoria alocada dinamicamente
    ponteiroDinamico = NULL; // atribuindo NULL ao ponteiro após liberação

    //testando o ponteiro ao liberar a memoria
    if (ponteiroDinamico == NULL) {
        printf("Ponteiro liberado e definido como NULL.\n");
    }return 0;}