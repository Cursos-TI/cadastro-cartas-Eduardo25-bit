#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre - Lógica Completa

int main() {
    printf("Desafio: Nível Mestre\n");

    // --- Declaração de Variáveis ---

    // Carta 1
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

    // Carta 2
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

    // --- Entrada de Dados: Carta 1 ---
    printf("\n-- Digite os dados da Carta 1 --\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Correção: Lê nomes com espaço (ex: Sao Paulo)

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_capita1 = (pib1 * 1000000000) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_capita1 + (1.0f / densidade1);


    // --- Entrada de Dados: Carta 2 ---
    printf("\n-- Digite os dados da Carta 2 --\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Correção: Lê nomes com espaço

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_capita2 + (1.0f / densidade2);


    // --- Exibição dos Dados ---
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
    printf("Super Poder: %.2f\n", super_poder1);

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
    printf("Super Poder: %.2f\n", super_poder2);


    // --- Comparação de Cartas ---
    printf("\n=== Comparação de Cartas ===\n");
    printf("(Resultado 1 = Carta 1 venceu | Resultado 0 = Carta 2 venceu)\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    // Regra da densidade: Menor valor vence (sinal <)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita1 > pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}