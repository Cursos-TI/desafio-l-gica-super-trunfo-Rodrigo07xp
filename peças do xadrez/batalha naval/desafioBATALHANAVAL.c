#include <stdio.h>
#include <string.h>
int main() {
    char linha[10]= {'A','B','C','D','E','F','G','H','I','J'};
    //CRIANDO O TABULEIRO (MATRIZ 10X10) com água = ~
    char * navios [10] [10];

    for (int i = 0; i <10; i++){
        for (int j = 0; j<10; j++){
            navios[i][j]="~";//~representa água
        }
    }
    //tamanho fixo dos navios
    int tamanhoNavio = 3;
    //coordenadas inicícais dos dois navios (predefinidas)
    int linhaH = 2, colunaH = 4; //navio horizontal
    int linhaV =5, colunaV = 7; //navio vertical

    //verificando se os navios cabem no tabuleiro e se não se sobrepoem
    if (colunaH + tamanhoNavio <=10 && linhaV + tamanhoNavio <=10){

    //posição navio horizontal
   for (int i = 0; i < tamanhoNavio; i++) {
        if (strcmp(navios[linhaH][colunaH + i], "~") == 0){
            navios[linhaH][colunaH + i] = "N";// "N significa navios"
        }
    }

    //posição navio vertical
    for (int i = 0; i<tamanhoNavio; i++){
        if (strcmp(navios[linhaV + i][colunaV],"~") == 0){
            navios[linhaV +i][colunaV] = "N";
        }
    }
}else{
    printf("Erro: Coordenadas fora do tabuleiro.\n");
    return 1;
}
// Exibe o tabueiro
    printf("\ntabuleiro:\n");
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            printf("%s", navios[i][j]);
        }
        printf("\n");
    }
}


