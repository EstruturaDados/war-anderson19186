#include <stdio.h>
#include <string.h>

// declaração da struct
typedef struct{
    char nome [200];
    char disciplina[100];
    float nota;
}Aluno;


int main(){
    int i;
    int posição=-1;
    char busca[200];

Aluno aluno_nota[10];

// inicializando o array de struct
for( i=0;i<10;i++){
    strcpy(aluno_nota[i].nome,"NULL");
    strcpy(aluno_nota[i].disciplina," ");
    aluno_nota[i].nota = 0.0;
}
//populando o array de struct


for(i=0;i<10;i++){
    printf("Digite o nome do aluno : ");      
    scanf(" %s%*c", &aluno_nota[i].nome);
    printf("Digite a disciplina do aluno : ");
    scanf(" %s%*c",  &aluno_nota[i].disciplina);
    printf("Digite a nota do aluno : ");
    scanf("%f%*c", &aluno_nota[i].nota);
}
    //imprimindo array sstruct
    //printf("\n texto %_",nome_vetor_struct[indice].nome_menbro_struct);
for(i=0;i<10;i++){

    printf("\n Nome do aluno : %s", aluno_nota[i].nome);
    printf("\n Disciplina do aluno : %s", aluno_nota[i].disciplina);
    printf("\n Nota do aluno : %.2f", aluno_nota[i].nota);

    }
    // buscar elemento no array de struct
    printf("\n Digite um nome: ");
    scanf(" %s%*c",busca);
for(i=0;i<10;i++){
    if(strcmp(busca, aluno_nota[i].nome)==0){
       printf("\n Registro encontrado: ");
       posição =i; 
       break; 
    }
    else{
        posição = -1;
    }
}


if(posição == -1){
    printf("\n Registro não encontrado");
}else{
printf("\n Registro encontrado :  ");
printf("\n Nome do aluno : %s", aluno_nota[posição].nome);
printf("\n Disciplina do aluno : %s", aluno_nota[posição].disciplina);
printf("\n Nota do aluno : %.2f", aluno_nota[posição].nota);
}
return 0;
}