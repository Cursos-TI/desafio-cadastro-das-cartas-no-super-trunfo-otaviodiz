#include <stdio.h> // Biblioteca que permite usar printf e scanf

int main(){
    printf("Desafio Super Trunfo!\n"); // Mostra uma mensagem na tela

    // Váriaveis para a primeira carta
    char estado[2]; // Sigla do estado (1 letra)
    char codigo[4]; // Código do estado (ex: A01)
    char nomeCidade[20]; // Nome da cidade
    int populacao; // População da cidade
    float area; // tamanho da cidade em km²
    float pib; // PIB da cidade em bilhões
    int pontosTuristicos; // número de pontos turísticos

    // Váriaveis para a segunda carta
    char estado2[2]; 
    char codigo2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    // Pedindo os dados da primeira carta
        printf("Digite os dados da Carta 1:\n");

        printf("Estado (A-H): \n");
        scanf(" %1s", estado); // Lê a letra do estado

        printf("Código da carta (ex: A01): \n");
        scanf("%3s", codigo); // Lê o código da carta

        printf("Nome da cidade: \n");
        scanf(" %19s", nomeCidade); // Lê o nome da cidade

        printf("População: \n");
        scanf("%d", &populacao); // Lê a população da cidade

        printf("A área é (em km²): \n"); 
        scanf(" %f", &area); // Lê a área da cidade

        printf("O pib é (em bilhões): \n");
        scanf("%f", &pib); // Lê o PIB da cidade

        printf("O número de pontos turísticos: \n");
        scanf("%d", &pontosTuristicos); // Lê os pontos turísticos


    // Pedido de dados da segunda carta
        printf("\nDigite os dados da Carta 2: \n");

        
        printf("Estado (A-H): \n");
        scanf(" %1s", estado2); // Lê a letra do estado 2

        printf("Código da carta (ex: A01): \n");
        scanf("%3s", codigo2); // Lê o código da carta 2

        printf("Nome da cidade: \n");
        scanf(" %19s", nomeCidade2); // Lê o nome da cidade 2

        printf("População: \n");
        scanf("%d", &populacao2); // Lê a população da cidade 2

        printf("A área é(em km²): \n");
        scanf(" %f", &area2); // Lê a área da cidade 2

        printf("O PIB é (em bilhões): \n");
        scanf("%f", &pib2); // Lê o PIB da cidade 2

        printf("O número de pontos turísticos: \n");
        scanf("%d", &pontosTuristicos2); // Lê os pontos turísticos 2

    // Mostra as informações da primeira carta
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Mostra as informações da segunda carta
     printf("\n===== Carta 2 =====\n");
     printf("Estado: %s\n", estado2);  
     printf("Código: %s\n", codigo2);
     printf("Nome da cidade: %s\n", nomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

     return 0; // Termina o programa
}
