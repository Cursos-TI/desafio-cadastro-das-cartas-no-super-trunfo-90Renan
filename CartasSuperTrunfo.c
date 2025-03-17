#include <stdio.h>

int main() {
    char estado1[20], codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char estado2[20], codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Leitura da primeira carta
    printf("****Vamos cadastrar a primeira carta**** \n");
    printf("Estado: Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n"); 
    scanf("%s", &estado1);

    printf("Digite o código da primeira carta (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta (sem espaços): \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (O Produto Interno Bruto da cidade): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos famosos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Exibição da primeira carta no formato correto
    printf("\nCarta 1:");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Leitura da segunda carta
    printf("\n****Vamos cadastrar a primeira carta**** \n");
    printf("Estado: Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n"); 
    scanf(" %s", &estado2);

    printf("Digite o código da segunda carta (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta (sem espaços): \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (O Produto Interno Bruto da cidade): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos famosos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição da segunda carta no formato correto
    printf("\n\nCarta 2:");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);

    return 0;
}
