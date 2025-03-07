#include <stdio.h>
 
int main(){
    printf("Carta 1: \n");
    char estado;
    char codigo[03];
    char nome[20];
    int populacao;
  

    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite o nome das cidade: \n");
    scanf("%s", &nome);
    printf("Infome a população: \n");
    scanf("%d", &populacao);
}