#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    char telefone[15];
};

int main(){

struct Pessoa lista[3];
int i;
//Preenche as informaçoes para cada pessoa na lista
strcpy(lista [0].nome,"ALANA");
lista[0].idade = 18;
strcpy(lista[0].telefone,"12345-6789");

strcpy(lista [1].nome,"Lucas");
lista[1].idade = 14;
strcpy(lista[1].telefone,"98765-4321");

strcpy(lista [2].nome,"julia");
lista[2].idade = 8;
strcpy(lista[2].telefone,"54321-6789");
//Exibe as informações de cada pessoa na lista
for(i = 0;i < 3;i++){
    printf("Pessoa %d:\n",i+1);
    printf("Nome:%s\n",lista[i].nome);
    printf("Idade:%d\n",lista[i].idade);
    printf("Telefone:%s\n",lista[i].telefone); 
}

    return 0;
}