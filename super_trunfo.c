
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Exibe "tela de boas-vindas" do jogo
    printf("Bem-vindo ao jogo 'Super Trunfo' de cidades!\n");
    printf("Voce podera cadastrar duas cartas com informacoes sobre cidades.\n\n");

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();  // Limpa buffer do teclado
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para reais
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    getchar(); // Limpa buffer novamente

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos resultados da comparação
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2)); // Menor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}
