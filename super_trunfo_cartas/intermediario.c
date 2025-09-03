#include <stdio.h>

int main()
{
    char carta_1_estado;
    char carta_1_codigo[20];
    char carta_1_cidade[20];
    int carta_1_populacao;
    float carta_1_area;
    float carta_1_pib;
    int carta_1_pontos_turisticos;

    printf("Digite o estado: \n");
    scanf("%c", &carta_1_estado);

    printf("Digite o código: \n");
    scanf("%s", carta_1_codigo);

    printf("Digite a cidade: \n");
    scanf("%s", carta_1_cidade);

    printf("Digite a população: \n");
    scanf("%i", &carta_1_populacao);

    printf("Digite a área: \n");
    scanf("%f", &carta_1_area);

    printf("Digite o PIB: \n");
    scanf("%f", &carta_1_pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &carta_1_pontos_turisticos);

    printf("Carta 1: \n");
    printf("Estado: %c \n", carta_1_estado);
    printf("Código: %s \n", carta_1_codigo);
    printf("Nome da Cidade: %s \n", carta_1_cidade);
    printf("População: %i \n", carta_1_populacao);
    printf("Área: %.2f km² \n", carta_1_area);
    printf("PIB: %.2f bilhões de reais \n", carta_1_pib);
    printf("Número de Pontos Turísticos: %i \n", carta_1_pontos_turisticos);

    float carta_1_densidade = carta_1_populacao / carta_1_area;
    float carta_1_pib_per_capta = (carta_1_pib * 1e9) / carta_1_populacao;

    printf("Densidade Populacional: %.2f hab/km² \n", carta_1_densidade);
    printf("PIB per Capita: %.2f reais \n", carta_1_pib_per_capta);

    char carta_2_estado;
    char carta_2_codigo[20];
    char carta_2_cidade[20];
    int carta_2_populacao;
    float carta_2_area;
    float carta_2_pib;
    int carta_2_pontos_turisticos;

    printf("Digite o estado: \n");
    scanf(" %c", &carta_2_estado);

    printf("Digite o código: \n");
    scanf("%s", carta_2_codigo);

    printf("Digite a cidade: \n");
    scanf("%s", carta_2_cidade);

    printf("Digite a população: \n");
    scanf("%i", &carta_2_populacao);

    printf("Digite a área: \n");
    scanf("%f", &carta_2_area);

    printf("Digite o PIB: \n");
    scanf("%f", &carta_2_pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &carta_2_pontos_turisticos);

    printf("Carta 2: \n");
    printf("Estado: %c \n", carta_2_estado);
    printf("Código: %s \n", carta_2_codigo);
    printf("Nome da Cidade: %s \n", carta_2_cidade);
    printf("População: %i \n", carta_2_populacao);
    printf("Área: %.2f km² \n", carta_2_area);
    printf("PIB: %.2f bilhões de reais \n", carta_2_pib);
    printf("Número de Pontos Turísticos: %i \n", carta_2_pontos_turisticos);

    float carta_2_densidade = carta_2_populacao / carta_2_area;
    float carta_2_pib_per_capta = (carta_2_pib * 1e9) / carta_2_populacao;

    printf("Densidade Populacional: %.2f hab/km² \n", carta_2_densidade);
    printf("PIB per Capita: %.2f reais \n", carta_2_pib_per_capta);

    return 0;
}