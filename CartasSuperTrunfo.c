#include <stdio.h>

int main() {
    char estado1[50], estado2[50];
    char codigoDaCidade1[4], codigoDaCidade2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Coletar informações da primeira carta com scanf e fgets
    printf("----- Primeira Carta -----\n");

    printf("Digite o nome do Estado: ");
    scanf(" %50[^\n]", estado1);

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

    // Calculando a Densidade Populacional da primeira carta
    densidadePopulacional1 = populacao1 / area1;

    // Calculando o PIB per Capita da primeira carta
    // PIB inserido em bilhões de reais; multiplicamos por 100.000.000 para converter em reais.
    pibPerCapita1 = (pib1 * 100000000) / populacao1;

    // Segunda carta
    printf("\n----- Segunda Carta -----\n");

    printf("Digite o nome do Estado: ");
    scanf(" %50[^\n]", estado2);

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

    // Calculando a Densidade Populacional da segunda carta
    densidadePopulacional2 = populacao2 / area2;

    // Calculando o PIB per Capita da segunda carta
    // PIB inserido em bilhões de reais; multiplicamos por 100.000.000 para converter em reais
    pibPerCapita2 = (pib2 * 100000000) / populacao2;

    // Exibir a primeira carta Trunfo com printf
    printf("\n----- Info. Primeira Carta -----");

    printf("\nEstado: %s", estado1);
    printf("\nCódigo da Carta: %s", codigoDaCidade1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f Km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita1);

    // Exibir a segunda carta Trunfo com printf
    printf("\n----- Info. Segunda Carta -----");

    printf("\nEstado: %s", estado2);
    printf("\nCódigo da Carta: %s", codigoDaCidade2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f Km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita2);

    return 0;
}