#include <stdio.h>
#include <string.h>

int main() {
char  Paraiba;
char nome[20];
float areaPB = 12548.41555;
int populacaoPB = 1050;
int PIB = 1000000;


char Pernambuco;

float areaPE = 15344.51544;
int populacaoPE = 1500;
int PIB2 = 120000;

int pontosPB = 0;
int pontosPE = 0;

printf("Olá! bem vindo ao jogo.\n");
printf("Seu estado é a Paraíba\n");
printf("Qual o seu nome?");
scanf("%s", nome);

printf("Essas são suas cartas!\n");
printf("Área = 12548.41555\n");
printf("Uma população de 1050\n");
printf("Seu PIB é de 1000000\n");

if (areaPB  > areaPE)
{
    printf("Você venceu essa rodada!\n");
    pontosPB++;
}
else{
    printf("O estado oposto venceu essa rodada!\n");
    pontosPE++;
}

if (populacaoPB > populacaoPE)
{
    printf("Você venceu essa rodada!\n");
    pontosPB++;
}
else{
    printf("O estado oposto venceu essa rodada!\n");
    pontosPE++;
}

if (PIB > PIB2)
{
    printf("Você venceu essa rodada!\n");
    pontosPB++;
}
else{
    printf("O estado oposto venceu essa rodada!\n");
    pontosPE++;

}
if (pontosPB > pontosPE)
{
    printf("Parabéns você venceu o jogo com mais pontos");
}

else if (pontosPE > pontosPB)
{
    printf("Que pena você não conseguiu vencer o adversário, mais sorte na proxima!");
}
else {
    printf("O jogo terminou empatado!\n");
}

float populacaoSP = 12400000;
    float areaSP = 1521;
    float densidadeSP = 8200;
    float PIBSP = 850000;
    int pontosTuristicosSP = 5;

    float populacaoRJ = 6700000;
    float areaRJ = 1200;
    float densidadeRJ = 5580;
    float PIBRJ = 400000;
    int pontosTuristicosRJ = 6;

    int pontosSP = 0;
    int pontosRJ = 0;

    
    char estado[40];
    printf("Vamos à rodada 02\n");
    printf("Dessa vez, escolha seu estado (São Paulo ou Rio de Janeiro):\n");
    scanf("%s", estado);

    
    if (strcmp(estado, "SãoPaulo") == 0 || strcmp(estado, "sao paulo") == 0 || strcmp(estado, "SP") == 0) {
        printf("\nSeu estado é São Paulo.\n");
        printf("Suas cartas são:\n");
        printf("População: %.0f habitantes\n", populacaoSP);
        printf("Área: %.0f km²\n", areaSP);
        printf("Densidade populacional: %.0f hab/km²\n", densidadeSP);
        printf("PIB: R$ %.0f bilhões\n", PIBSP);
        printf("Pontos turísticos: %d\n", pontosTuristicosSP);

    } else if (strcmp(estado, "RioDeJaneiro") == 0 || strcmp(estado, "rio de janeiro") == 0 || strcmp(estado, "RJ") == 0) {
        printf("\nSeu estado é Rio de Janeiro.\n");
        printf("Suas cartas são:\n");
        printf("População: %.0f habitantes\n", populacaoRJ);
        printf("Área: %.0f km²\n", areaRJ);
        printf("Densidade populacional: %.0f hab/km²\n", densidadeRJ);
        printf("PIB: R$ %.0f bilhões\n", PIBRJ);
        printf("Pontos turísticos: %d\n", pontosTuristicosRJ);

    } else {
        printf("Estado inválido! Escolha entre São Paulo ou Rio de Janeiro.\n");
    }

    printf("Agora vamos a batalha!\n");
       printf("Batalha de populção\n");
       if (populacaoSP > populacaoRJ)
       {
        printf("São Paulo ganhou essa rodada\n");
        pontosSP++;
       }
       else if (populacaoRJ>populacaoSP)
       {
        printf("Rio de Janeiro ganhou essa rodada\n");
        pontosRJ++;
       }
       else{
        printf("A rodada terminou em empate\n");
       }
       
       printf("Batalha de território\n");
       if (areaSP>areaRJ)
       {
        printf("São Paulo ganhou essa rodada\n");
        pontosSP++;
       }
       else if (areaRJ>areaSP)
       {
        printf("Rio de Janeiro ganhou essa rodada\n");
        pontosRJ++;
       }
       else{
        printf("A rodada terminou em empate\n");
       }
       printf("Batalha de densidade populacional\n");
       if (densidadeSP>densidadeRJ)
       {
        printf("São Paulo ganhou essa rodada\n");
        pontosSP++;
       }
       else if (densidadeRJ>densidadeSP)
       {
        printf("Rio de Janeiro ganhou essa rodada\n");
        pontosRJ++;
       }
       else{
        printf("A rodada terminou em empate\n");
       }

       if (pontosSP>pontosRJ)
       {
        printf("São Paulo venceu!\n");
       }
       else if (pontosRJ>pontosSP)
       {
        printf("Rio de Janeiro venceu!");
       }
       else if (pontosSP>=pontosRJ)
       {
        printf("Empate entre ambos estados!");
       }
       
       

       if (pontosRJ>pontosSP)
       {
       printf("O vencedor foi %sRJ");
       printf("Parabéns pela jornada, até a proxima!\n");
       }

       else if (pontosSP>pontosRJ)
       {
        printf("O vencedor %sSP\n");
        printf("Parabéns pela jornada, até a proxima\n");
       }
       
}