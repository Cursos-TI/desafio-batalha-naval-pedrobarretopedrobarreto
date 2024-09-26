#include <stdio.h>

//DESAFIO NÍVEL MESTRE CONCLUÍDO
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 3
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    printf("Cone:\n");
for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            matriz[i][j] = soma;
            if ((i == 0) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //1
            } else if ((i == 1) && (j == 1)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //2
            }  else if ((i == 1) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //3
            } else if ((i == 1) && (j == 3)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //4
            } else if ((i == 2) && (j == 0)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //5
            } else if ((i == 2) && (j == 1)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //6
            } else if ((i == 2) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //7
            } else if ((i == 2) && (j == 3)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //8
            } else if ((i == 2) && (j == 4)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //9

            } else {
                printf("%d ", matriz[i][j]);
            }

            
        }
        printf("\n");
        if (i == 5){
            break;
        }
    }

    printf("\n");

    printf("Octaedro:\n");
for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            matriz[i][j] = soma;
            if ((i == 0) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //1
            } else if ((i == 1) && (j == 1)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //2
            }  else if ((i == 1) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //3
            } else if ((i == 1) && (j == 3)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //4
            } else if ((i == 2) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //7
            } else {
                printf("%d ", matriz[i][j]);
            }

            
        }
        printf("\n");
        if (i == 5){
            break;
        }
    }

    printf("\n");

    printf("Cruz:\n");
for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            matriz[i][j] = soma;
            if ((i == 0) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //1
            } else if ((i == 1) && (j == 0)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //1.2
            } else if ((i == 1) && (j == 1)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //2
            }  else if ((i == 1) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //3
            } else if ((i == 1) && (j == 3)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //4
            } else if ((i == 1) && (j == 4)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //4.2
            } else if ((i == 2) && (j == 2)){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
                //7
            } else {
                printf("%d ", matriz[i][j]);
            }

            
        }
        printf("\n");
        if (i == 5){
            break;
        }
    }

    printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
