#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf(" Bem-vindo ao nosso jogo de adivinhação  \n");
    printf("******************************************\n");
    int numerosecreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    printf("%d %d\n", numerosecreto, chute);
    return 0;
}