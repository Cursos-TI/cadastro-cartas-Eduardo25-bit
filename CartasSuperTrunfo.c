#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas


int main() {
    printf("Desafio: nível Mestre\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades


    char estado1;         
    char codigo1[4];    
    char cidade1[50];    
    int populacao1;         
    float area1;           
    float pib1;             
    int pontos1;
    float densidade1;
    float pib_capita1;
    float super_poder1;



    char estado2;         
    char codigo2[4];    
    char cidade2[50];    
    int populacao2;         
    float area2;           
    float pib2;             
    int pontos2;
    float densidade2;
    float pib_capita2;
    float super_poder2;


  // Área para entrada de dados


      printf("\n--Dados Carta 1--\n");


    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);  

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos1);


    densidade1 = (float)populacao1 / area1;
    pib_capita1 = (pib1 * 1000000000) / (float)populacao1;



    printf("\n-- Dados da Carta 2 --\n");


    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);  

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos2);

   densidade2 = (float)populacao2 / area2;
   pib_capita2 = (pib2 * 1000000000) / (float)populacao2;



  // Área para exibição dos dados da cidade

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);



    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); 
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

return 0;
} 
