#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!!\n");

    char estado[2];
    char codigo[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    char estado2[2];
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;



        printf("Digite os dados da Carta 1:\n");

        printf("Estado (A-H): \n");
        scanf(" %1s", estado);

        printf("Código da carta (ex: A01): \n");
        scanf("%3s", codigo);

        printf("Nome da cidade: \n");
        scanf(" %19s", nomeCidade);

        printf("População: \n");
        scanf("%d", &populacao);

        printf("A área é (em km²): \n");
        scanf(" %f", &area);

        printf("O pib é (em bilhões): \n");
        scanf("%f", &pib);

        printf("O número de pontos turísticos: \n");
        scanf("%d", &pontosTuristicos);



        printf("\nDigite os dados da Carta 2: \n");

        
        printf("Estado (A-H): \n");
        scanf(" %1s", estado2);

        printf("Código da carta (ex: A01): \n");
        scanf("%3s", codigo2);

        printf("Nome da cidade: \n");
        scanf(" %19s", nomeCidade2);

        printf("População: \n");
        scanf("%d", &populacao2);

        printf("A área é(em km²): \n");
        scanf(" %f", &area2);

        printf("O PIB é (em bilhões): \n");
        scanf("%f", &pib2);

        printf("O número de pontos turísticos: \n");
        scanf("%d", &pontosTuristicos2);


    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

     printf("\n===== Carta 2 =====\n");
     printf("Estado: %s\n", estado2);  
     printf("Código: %s\n", codigo2);
     printf("Nome da cidade: %s\n", nomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

     return 0;
}
