#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2, codcarta1[4], codcarta2[4], nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    int npturisticos1, npturisticos2;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_percapta1, pib_percapta2, superPoder1, superPoder2;
    int resultadoPop, resultadoPTuristico, resultadoarea, resultadoPib, resultadoDensidadeP, resultadoPibPerc, resultadoSuperPoder;
   
  // Área para entrada de dados

    printf("\n *** Dados da primeira Carta *** \n\n");

    printf("Digite a letra referente ao estado, de 'A' a 'H': "); //pedido para entrada de dados
    scanf(" %c", &estado1); //leitura dos dados
    
    printf("Digite o código do Estado, de 01 a 04: ");
    scanf(" %3s", codcarta1);
   
    printf("Digite o nome da cidade(sem espaços): ");
    scanf(" %s", nomecidade1);

    printf("Digite a população total: ");
    scanf(" %lu", &populacao1);
   
    printf("Digite a Área em KM²: ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %i", &npturisticos1);
    
    printf("\n *** Dados da segunda Carta *** \n\n");
   
    printf("Digite a letra referente ao estado, de 'A' a 'H': ");
    scanf(" %c", &estado2);
    
    printf("Digite o código do Estado, de 01 a 04: ");
    scanf(" %3s", codcarta2);
    
    printf("Digite o nome da cidade(sem espaços): ");
    scanf(" %s", &nomecidade2);

    printf("Digite a população total: ");
    scanf(" %lu", &populacao2);
    
    printf("Digite a Área em KM²: ");
    scanf(" %f", &area2);
   
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %i", &npturisticos2);
    
    //calcula a densidade populacional e o pib per capta de cada carta
    densidade_pop1 = (float) populacao1 / area1;
    pib_percapta1 = (float) pib1 / populacao1;

    densidade_pop2 = (float) populacao2 / area2;
    pib_percapta2 = (float) pib2 / populacao2;

    //calcula superPoder

    superPoder1 = populacao1 + area1 + pib1 + npturisticos1 + (1/densidade_pop1) + pib_percapta1;
    superPoder2 = populacao2 + area2 + pib2 + npturisticos2 + (1/densidade_pop2) + pib_percapta2;

    // Área para exibição dos dados da cidade
    
    printf("\n *** Carta 1 *** \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c%s\n", estado1, codcarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", npturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per capta: R$ %.2f\n", pib_percapta1);
    printf("Superpoder %.2f\n", superPoder1);

    printf("\n *** Carta 2 *** \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codcarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", npturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per capta: R$ %.2f\n", pib_percapta2);
    printf("Superpoder %.2f\n", superPoder2);

    //compara as cartas e mostra o vencedor

    resultadoPop = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPTuristico = npturisticos1 > npturisticos2;
    resultadoDensidadeP = densidade_pop1 < densidade_pop2;
    resultadoPibPerc = pib_percapta1 > pib_percapta2;

    printf("\n *** Carta vencedora *** \n");
    printf("\n *** 1 - Carta1 Venceu! / 0 - Carta2 Venceu! *** \n");
    printf("População: %d\n", resultadoPop);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadoPib);
    printf("Número de pontos turísticos: %d\n", resultadoPTuristico);
    printf("Densidade Populacional: %d\n", resultadoDensidadeP);
    printf("PIB per capta: %d\n", resultadoPibPerc);
    printf("Super Poder %d\n", resultadoSuperPoder);

    
return 0;
} 