#include <stdio.h>

int main() {
    char estadoCarta1[10];                 
    char codigoCarta1[3];
    char nomeDaCidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;

    char estadoCarta2[10];                 
    char codigoCarta2[3];
    char nomeDaCidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;

    // Dados da carta 1

    printf("Digite a sigla do estado da carta 1: \n");
    scanf(" %s", estadoCarta1);    

    printf("Digite o código da carta 1 (3 caracteres): \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %49[^\n]", nomeDaCidadeCarta1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf(" %d", &populacaoCarta1);

    printf("Digite a area da cidade da carta 1: \n");
    scanf(" %f", &areaCarta1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf(" %f", &pibCarta1);

    printf("Digite os pontos turisticos da cidade da carta 1: \n");
    scanf(" %d", &pontosTuristicosCarta1);


    // Dados da carta 2

    printf("Digite a sigla do estado da carta 2: \n");
    scanf(" %s", estadoCarta2);

    printf("Digite o código da carta 2 (3 caracteres): \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %49[^\n]", nomeDaCidadeCarta2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf(" %d", &populacaoCarta2);

    printf("Digite a area da cidade da carta 2: \n");
    scanf(" %f", &areaCarta2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf(" %f", &pibCarta2);

    printf("Digite os pontos turisticos da cidade da carta 2: \n");
    scanf(" %d", &pontosTuristicosCarta2);

    
    // Exibindo os dados das cartas
    // Dados da carta 1

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Carta 1 - Estado: %s\n", estadoCarta1);
    printf("Carta 1 - Código da carta: %s\n",codigoCarta1);
    printf("Carta 1 - Cidade: %s\n", nomeDaCidadeCarta1);
    printf("Carta 1 - População: %d\n", populacaoCarta1);
    printf("Carta 1 - Área: %.2f km²\n", areaCarta1);
    printf("Carta 1 - PIB: R$ %.2f\n", pibCarta1);
    printf("Carta 1 - Pontos Turísticos: %d\n", pontosTuristicosCarta1);

    // Dados da carta 2

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Carta 2 - Estado: %s\n", estadoCarta2);
    printf("Carta 2 - Código da carta: %s\n", codigoCarta2);
    printf("Carta 2 - Cidade: %s\n", nomeDaCidadeCarta2);
    printf("Carta 2 - População: %d\n", populacaoCarta2);
    printf("Carta 2 - Área: %.2f km²\n", areaCarta2);
    printf("Carta 2 - PIB: R$ %.2f\n", pibCarta2);
    printf("Carta 2 - Pontos Turísticos: %d\n", pontosTuristicosCarta2);

    return 0;
}
