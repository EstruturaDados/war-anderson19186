#include <stdio.h>      
#include <string.h>

struct Disciplina{
    char nome[30];
    char professor[50];
    int cargaHoraria;
};
struct Aluno{
    char nome[50];
    int idade;
    int matricula;
    struct Disciplina disciplina[3];
};
void cadastrarDisciplina(struct Disciplina *disciplina,const char *nome,const char *professor,
 int cargaHoraria){
    strcpy(disciplina->nome,nome);
    strcpy(disciplina->professor,professor);
    disciplina->cargaHoraria = cargaHoraria;
}
void cadastarAluno(struct Aluno *aluno,const char*nome,int idade,int matricula){
    strcpy(aluno->nome,nome);
    aluno->idade = idade;   
    aluno->matricula = matricula;
    
    cadastrarDisciplina(&aluno->disciplina[0],"Matemtica","Prof.João Silva",60);
    cadastrarDisciplina(&aluno->disciplina[1],"Historia","Prof.Julia Costa",45);
    cadastrarDisciplina(&aluno->disciplina[2],"Quimica","Prof.Carlos Souza",50);
}

void exibirAluno(struct Aluno *aluno){
  int i;
  printf("Nome: %s\n",aluno->nome);
  printf("Idade: %d\n",aluno->idade);
  printf("Matricula: %d\n",aluno->matricula);
  printf("Disciplinas:\n");
  for(i=0;i<3;i++){
    printf("Disciplina %d:\n",i+1);
    printf("Nome: %s\n",aluno->disciplina[i].nome);
    printf("Professor: %s\n",aluno->disciplina[i].professor);
    printf("Carga Horaria: %d\n",aluno->disciplina[i].cargaHoraria);
  }
}
int main(){
    struct Aluno aluno1;
    cadastarAluno(&aluno1,"alana Lima",20,1234);
    exibirAluno(&aluno1);
    return 0;
}
