#include <stdio.h>
#include <string.h>
int main() {

int passo = 1;
int casas;      // fazer com que o usuário escolha uma quantidade de casas que quer avançar de acordo com a limitação de cada peça
int torre = 6;   // usar variavél for
int bispo = 8;   // usar variavél while
int rainha = 8;  // usar variavél do while
char direcao[20]; // entrada do usuário
              
// imprimir inicialmente as boas vindas ao usuário para que o mesmo venha à sentir mais vontade de jogar

    printf("Olá! Vamos começar nossa partida dee Xadrez!\n");
    printf("Inicialmente vamos aprender a movimentar 03 das suas 16 peças.\n");
    printf("Então que comece a gameplay!\n");

    // explicar a funcionalidade de cada peça para melhor experiêcia do usuário

    printf("Vamos começar com a torre!\n");
    printf("Ela se movera apenas horizonttalmente e verticalmente, ou seja, para cima e para os lados...");
    printf("O bispo!\n");
    printf("Ele se movimentará apenas na diágonal...\n");
    printf("E por fim a rainha!");
    printf("Ela se movimenta em todas às direçõs...\n");

    // após entender a funcionálidade de cada peça do jogo o usuário agora pode ver na prática como vai usar cada peça

    printf("Agora vamos ao Xadrez!\n");
    printf("Neste jogo a torre é limitada à 06 movimentos para cima ou para o lado (esquerda ou direita)\n");
    printf("Escolha por onde deseja avançar sua torre (cima, baixo, esquerda ou direita): ");
    scanf("%s", direcao);

 if (strcmp(direcao, "cima") == 0)
  {
        printf("Você movimentou-se para cima...\n");
    } else if (strcmp(direcao, "baixo") == 0)
     {
        printf("Você movimentou-se para baixo...\n");

    } else if (strcmp(direcao, "esquerda") == 0)
     {
        printf("Você movimentou-se para a esquerda...\n");
    } else if (strcmp(direcao, "direita") == 0) 
    
    {
        printf("Você movimentou-se para a direita...\n");
    } else {
        printf("Direção inválida.\n");
    }

    // Perguntar quantas casas o usuário quer mover
    printf("Quantas casas você deseja mover a torre (1 a 6)? ");
    scanf("%d", &casas);

    // Verificar se o número de casas está dentro do limite
    if (casas < 1 || casas > torre) {
        printf("Movimento inválido! A torre pode mover até %d casas.\n", torre);
    } else {
        printf("Movimentando torre %d casa(s) para %s...\n", casas, direcao);

         // Simular o movimento usando for
        for (int torre = 1; torre <= casas; torre++) {
            printf("Passo %d -> Torre moveu-se 1 casa para %s\n", torre, direcao);
        }

    printf("A torre completou o movimento de %d casa(s) para %s com sucesso!\n", casas, direcao);
    }

    printf("Agora vamos aprender os paços do bispo!...\n");
    printf("Ele se move nas diagonais (inclinado para à esquerda ou para à direita).\n");

    // Lê a direção

    printf("Escolha a direção que deseja movimentar o bispo (esquerda ou direita): ");
    scanf("%s", direcao);

    // Valida a direção

    if (strcmp(direcao, "esquerda") == 0)
    {
        printf("Você movimentou-se para a diagonal esquerda...\n");
    }
    else if (strcmp(direcao, "direita") == 0)
    {
        printf("Você movimentou-se para a diagonal direira...\n");
    }
    else
    {
        printf("Direção inválida.\n");

        return 1;
    }
    
    // Lê a quantidade de casas
    printf("Quantas casas você vai mover o bispo? (1-8): ");
    scanf("%d", &casas);
    
     // Verifica o limite de casas
    if (casas < 1 || casas > bispo) {
        printf("Movimento inválido! O bispo só pode mover de 1 a 8 casas.\n");
        return 1;
    }
    
     // Simula o movimento com while
    int i = 1;
    while (i <= casas) {
        printf("Passo %d -> Bispo moveu-se 1 casa na diagonal para a %s\n", i, direcao);
        i++;
    }
    //resultado final da jogada com o bispo.
    printf("O bispo completou o movimento de %d casa(s) para a %s.\n", casas, direcao);

    // introduzindo o movimento da Rainha.
    printf("Por fim, vamos aos movimentos da Rainha...\n");
    printf("A Rainha movi-se em todas às direções, mas para apenas compreendermos os seus movimentos vamos fazer um movimento simples à esquerda...\n ");
    printf("Mova a Rainha para à esquerda digitando esquerda.\n");
// Pegando direção
    printf("Digite a direção (por enquanto, só funciona com 'esquerda'): ");
    scanf("%s", direcao);

    // Verifica se a direção digitada é "esquerda"
    if (strcmp(direcao, "esquerda") == 0) {
        // Pegando quantidade de casas
        printf("Quantas casas você deseja mover a Rainha? (1 a 8): ");
        scanf("%d", &casas);

        // Validação
        if (casas < 1 || casas > 8) {
            printf("Quantidade de casas inválida. Digite um número entre 1 e 8.\n");
            return 1;
        }

   
    //simulando o movimento da Rainha.

   do {
            printf("Passo %d -> Rainha moveu 1 casa para a esquerda\n", passo);
            passo++;
        } while (passo <= rainha);
    
     printf("A Rainha moveu-se %d casas para a %s.\n", rainha, direcao);
    } else {
        printf("Mova-se apenas para a esquerda nessa jogada...\n");
    }
    printf("\nMuito bem! Agora você sabe como são os movimentos dessas peças no nosso jogo de xadrez!\n");
    printf("Continue avançando para a próxima parte do tutorial...\n");

    return 0;
    

 }