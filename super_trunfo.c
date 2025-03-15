#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Exibe "tela de boas-vindas" do jogo
    printf("Bem-vindo ao jogo 'Super Trunfo' de cidades!\n");
    printf("Voce podera cadastrar duas cartas com informacoes sobre cidades.\n");
    printf("Insira os dados conforme solicitado.\n\n");

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe os dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
