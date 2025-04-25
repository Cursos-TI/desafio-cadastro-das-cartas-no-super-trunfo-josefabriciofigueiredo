#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1[2], estado2[2];
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Coleta de dados da primeira carta
    printf("----- Primeira Carta -----\n");

    printf("Digite o nome do Estado (A - H): ");
    scanf("%s", estado1);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade1);

    printf("Digite a qtd. da população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a qtd. de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidadePopulacional1 = populacao1 / area1;

    // Calculando o PIB per Capita da primeira carta
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB convertido para reais (1 bilhão -> 1.000.000.000)

    // Calculando Super Poder da primeira carta
    superPoder1 = (float) populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + pontosTuristicos1;

    // Coleta de dados da segunda carta
    printf("\n----- Segunda Carta -----\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade2);

    printf("Digite a qtd. da população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a qtd. de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando a Densidade Populacional da segunda carta
    densidadePopulacional2 = populacao2 / area2;

    // Calculando o PIB per Capita da segunda carta
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB convertido para reais (1 bilhão -> 1.000.000.000)

    // Calculando Super Poder da segunda carta
    superPoder2 = (float) populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + pontosTuristicos2;

    // Exibição das informações da primeira carta
    printf("\n----- Info. Primeira Carta -----");

    printf("\nEstado: %s", estado1);
    printf("\nCódigo da Carta: %s", codigoDaCarta1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f Km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita1);
    printf("\nSuper Poder: %.1f", superPoder1);

    // Exibição das informações da segunda carta
    printf("\n\n----- Info. Segunda Carta -----");

    printf("\nEstado: %s", estado2);
    printf("\nCódigo da Carta: %s", codigoDaCarta2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f Km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita2);
    printf("\nSuper Poder: %.1f", superPoder2);

    // Comparação dos atributos entre as cartas
    /* O problema dessas comparações ensinadas nos vídeos - sem uso do if...else - é que, em caso de empate,
    o segundo será considerado vencedor, pois será definido como falso (0)
    para a comparação da Carta 1 ser maior que a Carta 2*/
    printf("\n\n----- Comparação -----");
    printf("\nCarta 1 venceu => 1");
    printf("\nCarta 2 venceu => 0");

    printf("\n\nPopulação: %d", populacao1 > populacao2);
    printf("\nÁrea: %d", area1 > area2);
    printf("\nPIB: %d", pib1 > pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1 > pontosTuristicos2);
    printf("\nDensidade Populacional: %d", densidadePopulacional1 < densidadePopulacional2); // O menor vence
    printf("\nPIB per Capita: %d", pibPerCapita1 > pibPerCapita2);
    printf("\nSuper Poder: %d", superPoder1 > superPoder2);
}