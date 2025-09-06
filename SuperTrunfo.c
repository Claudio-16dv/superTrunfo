#include <stdio.h>

void entrarDadosCarta(char estadoCarta1[], char codigoCarta1[], char nomeDaCidadeCarta1[], int *populacaoCarta1, float *areaCarta1, float *pibCarta1, int *pontosTuristicosCarta1,
                      char estadoCarta2[], char codigoCarta2[], char nomeDaCidadeCarta2[], int *populacaoCarta2, float *areaCarta2, float *pibCarta2, int *pontosTuristicosCarta2) {
    
    // Dados da carta 1

    printf("Digite a sigla do estado da carta 1: \n");
    scanf(" %s", estadoCarta1);    

    printf("Digite o código da carta 1 (3 caracteres): \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %49[^\n]", nomeDaCidadeCarta1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf(" %d", populacaoCarta1);

    printf("Digite a area da cidade da carta 1: \n");
    scanf(" %f", areaCarta1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf(" %f", pibCarta1);

    printf("Digite os pontos turisticos da cidade da carta 1: \n");
    scanf(" %d", pontosTuristicosCarta1);


    // Dados da carta 2

    printf("Digite a sigla do estado da carta 2: \n");
    scanf(" %s", estadoCarta2);

    printf("Digite o código da carta 2 (3 caracteres): \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %49[^\n]", nomeDaCidadeCarta2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf(" %d", populacaoCarta2);

    printf("Digite a area da cidade da carta 2: \n");
    scanf(" %f", areaCarta2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf(" %f", pibCarta2);

    printf("Digite os pontos turisticos da cidade da carta 2: \n");
    scanf(" %d", pontosTuristicosCarta2);
}

void calcularDensidadePopulacional(int *populacaoCarta1, float *areaCarta1, int *populacaoCarta2, float *areaCarta2, float *densidadeCarta1, float *densidadeCarta2) {
    *densidadeCarta1 = (float)*populacaoCarta1 / *areaCarta1;
    *densidadeCarta2 = (float)*populacaoCarta2 / *areaCarta2;
}

void calcularPibPerCapita(float *pibCarta1, int *populacaoCarta1, float *pibCarta2, int *populacaoCarta2, float *pibPerCapitaCarta1, float *pibPerCapitaCarta2) {
    *pibPerCapitaCarta1 = *pibCarta1 / *populacaoCarta1;
    *pibPerCapitaCarta2 = *pibCarta2 / *populacaoCarta2;
}

void exibirDadosCarta(char estadoCarta1[], char codigoCarta1[], char nomeDaCidadeCarta1[], int populacaoCarta1, float areaCarta1, float pibCarta1, int pontosTuristicosCarta1,
                       char estadoCarta2[], char codigoCarta2[], char nomeDaCidadeCarta2[], int populacaoCarta2, float areaCarta2, float pibCarta2, int pontosTuristicosCarta2,
                       float densidadeCarta1, float densidadeCarta2, float pibPerCapitaCarta1, float pibPerCapitaCarta2)
{
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Carta 1 - Estado: %s\n", estadoCarta1);
    printf("Carta 1 - Código da carta: %s\n",codigoCarta1);
    printf("Carta 1 - Cidade: %s\n", nomeDaCidadeCarta1);
    printf("Carta 1 - População: %d\n", (int)populacaoCarta1);
    printf("Carta 1 - Área: %.2f km²\n", areaCarta1);
    printf("Carta 1 - PIB: R$ %.2f bilhões de reais\n", pibCarta1);
    printf("Carta 1 - Pontos Turísticos: %d\n", pontosTuristicosCarta1);
    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidadeCarta1);
    printf("Carta 1 - PIB per Capita: R$ %.2f\n", pibPerCapitaCarta1);

    // Dados da carta 2

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Carta 2 - Estado: %s\n", estadoCarta2);
    printf("Carta 2 - Código da carta: %s\n", codigoCarta2);
    printf("Carta 2 - Cidade: %s\n", nomeDaCidadeCarta2);
    printf("Carta 2 - População: %d\n", populacaoCarta2);
    printf("Carta 2 - Área: %.2f km²\n", areaCarta2);
    printf("Carta 2 - PIB: R$ %.2f bilhões de reais\n", pibCarta2);
    printf("Carta 2 - Pontos Turísticos: %d\n", pontosTuristicosCarta2);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidadeCarta2);
    printf("Carta 2 - PIB per Capita: R$ %.2f\n", pibPerCapitaCarta2);
}


int main() {
    char estadoCarta1[10];                 
    char codigoCarta1[3];
    char nomeDaCidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;
    float densidadeCarta1;
    float pibPerCapitaCarta1;

    char estadoCarta2[10];                 
    char codigoCarta2[3];
    char nomeDaCidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;
    float densidadeCarta2;
    float pibPerCapitaCarta2;

    entrarDadosCarta(estadoCarta1, codigoCarta1, nomeDaCidadeCarta1, &populacaoCarta1, &areaCarta1, &pibCarta1, &pontosTuristicosCarta1,
                     estadoCarta2, codigoCarta2, nomeDaCidadeCarta2, &populacaoCarta2, &areaCarta2, &pibCarta2, &pontosTuristicosCarta2);

    calcularDensidadePopulacional(&populacaoCarta1, &areaCarta1, &populacaoCarta2, &areaCarta2, &densidadeCarta1, &densidadeCarta2);

    calcularPibPerCapita(&pibCarta1, &populacaoCarta1, &pibCarta2, &populacaoCarta2, &pibPerCapitaCarta1, &pibPerCapitaCarta2);

    exibirDadosCarta(estadoCarta1, codigoCarta1, nomeDaCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontosTuristicosCarta1,
                    estadoCarta2, codigoCarta2, nomeDaCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontosTuristicosCarta2,
                    densidadeCarta1, densidadeCarta2, pibPerCapitaCarta1, pibPerCapitaCarta2);

    return 0;
}