// adicionando as bibliotecas necessárias.
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// VARIAVEIS GLOBAIS
#define MAX_TERRITORIOS 5
#define NOME_SIZE 30
#define COR_SIZE 10

//DEFINIÇÃO DA ESTRUTURA (struct)
struct Territorio {
    char nome[NOME_SIZE];
    char cor[COR_SIZE];
    int tropas;
};
// FUNÇÃO PARA LIMPAR O BUFFER DE ENTRADA
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// FUNÇÃO PRINCIPAL
int main() {
    struct Territorio territorio[MAX_TERRITORIOS];
    int totalTerritorios = 0;
    int opcao;

        printf("========================================\n");
        printf("   --- BEM VINDO AO JOGO WAR---         \n");
        printf("========================================\n");
        printf("escolha uma opção:\n");
        printf("1- Adicionar Território\n");
        printf("0- Sair\n");
      
        
        //Lê a opção do usuário
        scanf("%d",&opcao);
        limparBuffer(); // Limpar o '\n' deixado pelo scanf

        //processamento da opção.

     switch (opcao)
     {
        case 1://ADICIONAR TERRITÓRIO
            printf("--- Adicionar Território ---\n\n");
                if(totalTerritorios < MAX_TERRITORIOS){
                 for(int i = 0; i < MAX_TERRITORIOS; i++) {
                 
                printf("Digite o nome do território: ");
                fgets(territorio[totalTerritorios].nome,NOME_SIZE, stdin);

                printf("Digite a cor do território: ");
                fgets(territorio[totalTerritorios].cor,COR_SIZE, stdin);
                
                territorio[totalTerritorios].nome[strcspn(territorio[totalTerritorios].nome, "\n")] = 0; 
                territorio[totalTerritorios].cor[strcspn(territorio[totalTerritorios].cor, "\n")] = 0; 
                territorio[totalTerritorios].tropas = 0; // Inicializa tropas como 0
                
                printf("Digite o número de tropas: ");
                scanf("%d", &territorio[totalTerritorios].tropas);
                limparBuffer();// Limpar o '\n' deixado pelo scanf
                printf("----------------------------------------\n");

                 totalTerritorios++;}
                 
                
                 printf("Território adicionado com sucesso!\n");
                }
                 else{
                   printf("Limite de territórios atingido!\n");
                    }
              printf("\nPressione Enter para continuar...");
                getchar(); // Espera o usuário pressionar Enter
        break;
        case 0://SAIR
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            printf("\nPressione Enter para continuar...");
            getchar(); // Espera o usuário pressionar Enter
            break;
    } 
if (totalTerritorios!= 0) {
          // lista de territorios cadastrados
          printf("========================================\n");
          printf("   --- MAPA MUNDO ATUAL ---         \n");
          printf("========================================\n");
          for(int i = 0; i < totalTerritorios; i++) {
            printf("Território %d:\n", i + 1);
            printf("Nome: %s\n", territorio[i].nome);
            printf("Cor: %s\n", territorio[i].cor);
            printf("Tropas: %d\n", territorio[i].tropas);
            printf("----------------------------------------\n");
          }
        }else {
            printf("     \n");
        }       
          return 0;
  }       
