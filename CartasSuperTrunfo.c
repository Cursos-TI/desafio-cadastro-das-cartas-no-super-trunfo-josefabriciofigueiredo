#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Defina as variáveis: estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[50], estado2[50];
    char codigoDaCidade1[3], codigoDaCidade2[3];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Coletar informações da primeira carta com scanf
    printf("----- Primeira Carta -----\n");
    
    printf("Digite o nome do Estado: ");
    scanf(" %50[^\n]", &estado1);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCidade1);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade1);

    printf("Digite a qtd. da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a qtd. de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Coletar informações da segunda carta com scanf
    printf("\n----- Segunda Carta -----\n");
    
    printf("Digite o nome do Estado: ");
    scanf(" %50[^\n]", &estado2);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCidade2);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade2);

    printf("Digite a qtd. da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a qtd. de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Exibir a primeira carta Trunfo com printf
    printf("\n----- Info. Primeira Carta -----");

    printf("\nEstado: %s", estado1);
    printf("\nCódigo da Carta: %s", codigoDaCidade1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nQtd. da população: %d", populacao1);
    printf("\nÁrea: %.2f Km²", area1);
    printf("\nPIB %.2f", pib1);
    printf("\nQtd. de Pontos Turísticos: %d", pontosTuristicos1);

    // Exibir a segunda carta Trunfo com printf
    printf("\n----- Info. Segunda Carta -----");

    printf("\nEstado: %s", estado2);
    printf("\nCódigo da Carta: %s", codigoDaCidade2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nQtd. da população: %d", populacao2);
    printf("\nÁrea: %.2f Km²", area2);
    printf("\nPIB %.2f", pib2);
    printf("\nQtd. de Pontos Turísticos: %d", pontosTuristicos2);

    return 0;
}
