#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;
    ponteiro= (int*) calloc(5,sizeof(int));//aloca memoria para 5 inteiros e inicializa com 0
     if(ponteiro !=NULL) {//verifica se a alocação foi bem sucedida
         int i;
         for (i=0;i<5;i++){
            printf("%d",ponteiro[i]);//exibe os valores iniciai(todos devem ser zero)

         }
            free(ponteiro);//libera a memória alocada
        }else{
            printf("Erro na alocação de memória\n");
        }
        


    return 0;
}