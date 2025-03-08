#include <stdio.h>


//Programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.




// Declarações das variáveis
 
int main(){
   
    char estado;
    char codigo[03];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numero;




    // Entrada de dados da carta 1




    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Infome a população: \n");
    scanf("%d", &populacao);
    printf("Infome a área em km²: \n");
    scanf("%f", &area);
    printf("Infome o PIB: \n");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &numero);


    // Saída de dados da carta 1


    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero);




    //Entrada de dados da carta 2




    printf("Próxima carta \n");
    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    printf("Infome a população: \n");
    scanf("%d", &populacao);
    printf("Infome a área em km²: \n");
    scanf("%f", &area);
    printf("Infome o PIB: \n");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &numero);


    // Saída de dados da carta 2


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero);


   


return 0;


   
}