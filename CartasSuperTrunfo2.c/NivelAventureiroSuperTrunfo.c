#include <stdio.h>


//Programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.




// Declarações das variáveis
 
int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[30], nomeCidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    // Inserção dos dados da Carta 1
    printf("\nInsira os dados da Carta 1\n");

    printf("Estado (1 caractere):\n");
    scanf(" %c", &estado1);

    printf("Código (3 caracteres):\n");
    scanf("%3s", codigo1);

    printf("Nome da cidade (até 30 caracteres):\n");
    scanf(" %[^\n]", nomeCidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Área (km²):\n");
    scanf("%f", &area1);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Inserção dos dados da Carta 2
    printf("\nInsira os dados da Carta 2\n");

    printf("Estado (1 caractere):\n");
    scanf(" %c", &estado2);

    printf("Código (3 caracteres):\n");
    scanf("%3s", codigo2);

    printf("Nome da cidade (até 30 caracteres):\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Área (km²):\n");
    scanf("%f", &area2);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    //Calculo das variaveis 

    densidadepopulacional1 = (float)(populacao1 / area1);
    densidadepopulacional2 = (float)(populacao2 / area2);

    pibpercapita1 = (float)(pib1 / populacao1);
    pibpercapita2 = (float)(pib2 / populacao2);

    // Exibição dos dados inseridos
    printf("\nCartas Inseridas\n");

    printf("\nCarta 1\n");
    printf("Estado:\n%c\n", estado1);
    printf("Código:\n%s\n", codigo1);
    printf("Nome da Cidade:\n%s\n", nomeCidade1);
    printf("População:\n%d\n", populacao1);
    printf("Área:\n%.2f km²\n", area1);
    printf("Pontos Turísticos:\n%d\n", pontosTuristicos1);
    printf("Densidade Populacional:\n%.2f \n", densidadepopulacional1);
    printf("PIB Per Capita:\n%.2f \n", pibpercapita1);

    printf("\nCarta 2\n");
    printf("Estado:\n%c\n", estado2);
    printf("Código:\n%s\n", codigo2);
    printf("Nome da Cidade:\n%s\n", nomeCidade2);
    printf("População:\n%d\n", populacao2);
    printf("Área:\n%.2f km²\n", area2);
    printf("Pontos Turísticos:\n%d\n", pontosTuristicos2);
    printf("Densidade Populacional:\n%.2f \n", densidadepopulacional2);
    printf("PIB Per Capita:\n%.2f \n", pibpercapita2);

    return 0;
}