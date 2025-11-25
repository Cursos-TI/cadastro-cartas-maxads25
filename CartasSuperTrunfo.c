#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2, codcarta1[4], codcarta2[4], nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, npturisticos1, npturisticos2;
    float area1, area2, pib1, pib2;

   
  // Área para entrada de dados

    printf("Digite a letra referente ao estado, de 'A' a 'H': "); //pedido para entrada de dados
    scanf("%c", &estado1); //leitura dos dados
    while (getchar() != '\n'); //linha para remover o \n deixado no buffer pelo scanf

    printf("Digite o código do Estado, de 01 a 04: ");
    scanf("%2s", codcarta1);
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomecidade1,50,stdin); //leitura de dados para aceitar nomes compostos
    nomecidade1[strcspn(nomecidade1,"\n")] = 0; //linha para remover o \n adicionado pelo fgets

    printf("Digite a população total: ");
    scanf("%i", &populacao1);
    while (getchar() != '\n');

    printf("Digite a Área em KM²: ");
    scanf("%f", &area1);
    while (getchar() != '\n');

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &npturisticos1);
    while (getchar() != '\n');

    printf("Digite a letra referente ao estado, de 'A' a 'H': ");
    scanf("%c", &estado2);
    while (getchar() != '\n');

    printf("Digite o código do Estado, de 01 a 04: ");
    scanf("%2s", codcarta2);
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomecidade2,50,stdin);
    nomecidade2[strcspn(nomecidade2,"\n")] = 0;

    printf("Digite a população total: ");
    scanf("%i", &populacao2);
    while (getchar() != '\n');

    printf("Digite a Área em KM²: ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &npturisticos2);
    while (getchar() != '\n');

  // Área para exibição dos dados da cidade
    
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c%s\n", estado1, codcarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %i\n", npturisticos1);

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codcarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %i\n", npturisticos2);

    
return 0;
} 
