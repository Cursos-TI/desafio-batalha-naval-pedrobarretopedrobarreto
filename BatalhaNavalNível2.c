#include <stdio.h>

//DESAFIO NÍVEL INTERMEDIÁRIO
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

int main() {
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int soma = 0;
    int coordenadaXparte1navioA;
    int coordenadaXparte2navioA;
    int coordenadaXparte3navioA;
    int coordenadaXparte4navioA;
    int coordenadaXparte1navioB;
    int coordenadaXparte2navioB;
    int coordenadaXparte3navioB;
    int coordenadaXparte4navioB;
    int coordenadaXparte1navioC;
    int coordenadaXparte2navioC;
    int coordenadaXparte3navioC;
    int coordenadaXparte4navioC;
    int coordenadaXparte1navioD;
    int coordenadaXparte2navioD;
    int coordenadaXparte3navioD;
    int coordenadaXparte4navioD;
    int coordenadaYparte1navioA;
    int coordenadaYparte2navioA;
    int coordenadaYparte3navioA;
    int coordenadaYparte4navioA;
    int coordenadaYparte1navioB;
    int coordenadaYparte2navioB;
    int coordenadaYparte3navioB;
    int coordenadaYparte4navioB;
    int coordenadaYparte1navioC;
    int coordenadaYparte2navioC;
    int coordenadaYparte3navioC;
    int coordenadaYparte4navioC;
    int coordenadaYparte1navioD;
    int coordenadaYparte2navioD;
    int coordenadaYparte3navioD;
    int coordenadaYparte4navioD;

    
    printf("Escolha na matriz a seguir 4 dos números que irão posicionar as 4 partes dos navios A, B, C, D.\n");
    printf("Observações:\n1. O navio A deve estar na posição horizontal, o navio B na vertical, o navio C e D na diagonal.\n");
    printf("2. Cada parte de cada posicção de acada navio deve estar uma ao lado da outra conforme suas orientações, se horizontal, vertical ou diagonal\n");

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            soma++;
            matrizA[i][j] = soma;
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Ao escolher os 4 números das 4 partes do navio A digite as coordenadas de cada posição de cada parte do navio(lembrando que a o navio A deve estar na horizontal)\n");
    soma = 0;
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            soma++;
    
            printf("Para a posição: %d a coordenada é x: %d e y: %d \n", soma, i, j);
        }
        if (i == 10){
            break;
        }
        
    }
    printf("Com base nas posições conformes as coordendas\n");
    printf("Digite a coordenada x da posição que vc escolheu da PRIMEIRA parte do navio A:\n");
    scanf("%d", &coordenadaXparte1navioA);
    printf("Digite a coordenada y da posição que vc escolheu da PRIMEIRA parte do navio A:\n");
    scanf("%d", &coordenadaYparte1navioA);
    printf("Digite a coordenada x da posição que vc escolheu da SEGUNDA parte do navio A:\n");
    scanf("%d", &coordenadaXparte2navioA);
    printf("Digite a coordenada y da posição que vc escolheu da SEGUNDA parte do navio A:\n");
    scanf("%d", &coordenadaYparte2navioA);
    printf("Digite a coordenada x da posição que vc escolheu da TERCEIRA parte do navio A:\n");
    scanf("%d", &coordenadaXparte3navioA);
    printf("Digite a coordenada y da posição que vc escolheu da TERCEIRA parte do navio A:\n");
    scanf("%d", &coordenadaYparte3navioA);
    printf("Digite a coordenada x da posição que vc escolheu da QUARTA parte do navio A:\n");
    scanf("%d", &coordenadaXparte4navioA);
    printf("Digite a coordenada y da posição que vc escolheu da QUARTA parte do navio A:\n");
    scanf("%d", &coordenadaYparte4navioA);
    printf("\n");

    printf("Agora sobre o navio B\n");
    printf("Digite a coordenada x da posição que vc escolheu da PRIMEIRA parte do navio B:\n");
    scanf("%d", &coordenadaXparte1navioB);
    printf("Digite a coordenada y da posição que vc escolheu da PRIMEIRA parte do navio B:\n");
    scanf("%d", &coordenadaYparte1navioB);
    printf("Digite a coordenada x da posição que vc escolheu da SEGUNDA parte do navio B:\n");
    scanf("%d", &coordenadaXparte2navioB);
    printf("Digite a coordenada y da posição que vc escolheu da SEGUNDA parte do navio B:\n");
    scanf("%d", &coordenadaYparte2navioB);
    printf("Digite a coordenada x da posição que vc escolheu da TERCEIRA parte do navio B:\n");
    scanf("%d", &coordenadaXparte3navioB);
    printf("Digite a coordenada y da posição que vc escolheu da TERCEIRA parte do navio B:\n");
    scanf("%d", &coordenadaYparte3navioB);
    printf("Digite a coordenada x da posição que vc escolheu da QUARTA parte do navio B:\n");
    scanf("%d", &coordenadaXparte4navioB);
    printf("Digite a coordenada y da posição que vc escolheu da QUARTA parte do navio B:\n");
    scanf("%d", &coordenadaYparte4navioB);
    printf("\n");

    printf("Agora sobre o navio C\n");
    printf("Digite a coordenada x da posição que vc escolheu da PRIMEIRA parte do navio C:\n");
    scanf("%d", &coordenadaXparte1navioC);
    printf("Digite a coordenada y da posição que vc escolheu da PRIMEIRA parte do navio C:\n");
    scanf("%d", &coordenadaYparte1navioC);
    printf("Digite a coordenada x da posição que vc escolheu da SEGUNDA parte do navio C:\n");
    scanf("%d", &coordenadaXparte2navioC);
    printf("Digite a coordenada y da posição que vc escolheu da SEGUNDA parte do navio C:\n");
    scanf("%d", &coordenadaYparte2navioC);
    printf("Digite a coordenada x da posição que vc escolheu da TERCEIRA parte do navio C:\n");
    scanf("%d", &coordenadaXparte3navioC);
    printf("Digite a coordenada y da posição que vc escolheu da TERCEIRA parte do navio C:\n");
    scanf("%d", &coordenadaYparte3navioC);
    printf("Digite a coordenada x da posição que vc escolheu da QUARTA parte do navio C:\n");
    scanf("%d", &coordenadaXparte4navioC);
    printf("Digite a coordenada y da posição que vc escolheu da QUARTA parte do navio C:\n");
    scanf("%d", &coordenadaYparte4navioC);
    printf("\n");

    printf("Agora sobre o navio D\n");
    printf("Digite a coordenada x da posição que vc escolheu da PRIMEIRA parte do navio D:\n");
    scanf("%d", &coordenadaXparte1navioD);
    printf("Digite a coordenada y da posição que vc escolheu da PRIMEIRA parte do navio D:\n");
    scanf("%d", &coordenadaYparte1navioD);
    printf("Digite a coordenada x da posição que vc escolheu da SEGUNDA parte do navio D:\n");
    scanf("%d", &coordenadaXparte2navioD);
    printf("Digite a coordenada y da posição que vc escolheu da SEGUNDA parte do navio D:\n");
    scanf("%d", &coordenadaYparte2navioD);
    printf("Digite a coordenada x da posição que vc escolheu da TERCEIRA parte do navio D:\n");
    scanf("%d", &coordenadaXparte3navioD);
    printf("Digite a coordenada y da posição que vc escolheu da TERCEIRA parte do navio D:\n");
    scanf("%d", &coordenadaYparte3navioD);
    printf("Digite a coordenada x da posição que vc escolheu da QUARTA parte do navio D:\n");
    scanf("%d", &coordenadaXparte4navioD);
    printf("Digite a coordenada y da posição que vc escolheu da QUARTA parte do navio D:\n");
    scanf("%d", &coordenadaYparte4navioD);
    printf("\n");

    soma = 0;

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            matrizB[i][j] = soma;
            
        }
        if (i == 10){
            break;
        }
    }

    printf("\n");


    matrizB[coordenadaXparte1navioA][coordenadaYparte1navioA] = 3;
    matrizB[coordenadaXparte2navioA][coordenadaYparte2navioA] = 3;
    matrizB[coordenadaXparte3navioA][coordenadaYparte3navioA] = 3;
    matrizB[coordenadaXparte4navioA][coordenadaYparte4navioA] = 3;

    matrizB[coordenadaXparte1navioB][coordenadaYparte1navioB] = 3;
    matrizB[coordenadaXparte2navioB][coordenadaYparte2navioB] = 3;
    matrizB[coordenadaXparte3navioB][coordenadaYparte3navioB] = 3;
    matrizB[coordenadaXparte4navioB][coordenadaYparte4navioB] = 3;

    matrizB[coordenadaXparte1navioC][coordenadaYparte1navioC] = 3;
    matrizB[coordenadaXparte2navioC][coordenadaYparte2navioC] = 3;
    matrizB[coordenadaXparte3navioC][coordenadaYparte3navioC] = 3;
    matrizB[coordenadaXparte4navioC][coordenadaYparte4navioC] = 3;

    matrizB[coordenadaXparte1navioD][coordenadaYparte1navioD] = 3;
    matrizB[coordenadaXparte2navioD][coordenadaYparte2navioD] = 3;
    matrizB[coordenadaXparte3navioD][coordenadaYparte3navioD] = 3;
    matrizB[coordenadaXparte4navioD][coordenadaYparte4navioD] = 3;

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

        
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
        if (i == 10){
            break;
        }
    }








    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // Um navio ocupa 4 espaços

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
