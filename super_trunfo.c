#include <stdio.h>

int main(){
    char codigo[3];
    char cidade[50];
    char estado;
    int populacao, turismo;
    float area, pib;

    char codigo2[3];
    char cidade2[50];
    char estado2;
    int populacao2, turismo2;
    float area2, pib2;

    //Carta 1
    printf("CARTA 1 \n");

    printf("Qual é o Estado? \n");
    scanf(" %c", &estado);
    
    printf("Qual é o código da carta? \n");
    scanf("%s", &codigo);

    printf("Qual é o nome da cidade? \n");
    scanf("%s", &cidade);

    printf("Quanto é o número da população? \n");
    scanf("%d", &populacao);

    printf("Quanto é a a área (em km²)? \n");
    scanf("%f", &area);

    printf("Quanto é o PIB? \n");
    scanf("%f", &pib);

    printf("Qual é o número de pontos urísticos? \n");
    scanf("%d", &turismo);

    printf("\n");


    //Carta 2
    printf("CARTA 2 \n");

    printf("Qual é o Estado? \n");
    scanf(" %c", &estado2);
    
    printf("Qual é o código da carta? \n");
    scanf("%s", &codigo2);

    printf("Qual é o nome da cidade? \n");
    scanf("%s", &cidade2);

    printf("Quanto é o número da população? \n");
    scanf("%d", &populacao2);

    printf("Quanto é a a área (em km²)? \n");
    scanf("%f", &area2);

    printf("Quanto é o PIB? \n");
    scanf("%f", &pib2);

    printf("Qual é o número de pontos urísticos? \n");
    scanf("%d", &turismo2);

    printf("\n");
    
    //Resultado
    printf("CARTA 1 \n");
    printf("Estado: %c - Código da Carta: %s - Nome da Cidade: %s\n", estado, codigo, cidade);
    printf("População: %d - Área (em km²): %f - PIB: %f\n", populacao, area, pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);

    printf("\n");

    printf("CARTA 2 \n");
    printf("Estado: %c - Código da Carta: %s - Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d - Área (em km²): %f - PIB: %f\n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;

}
