#include <stdio.h>
#include <string.h> // Para usar strcspn

int main()
{
    // VARIAVEIS CARTA 1
    char nome1[50];
    char codigocarta1[4];
    char nomedacidade1[50];
    float numeropopulacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade_populacional1; // Nova variável para densidade populacional
    float pitpercapita1;           // Nova variável para Calcular o PIB per Capita

    // VARIAVEIS CARTA 2
    char nome2[50];
    char codigocarta2[4];
    char nomedacidade2[50];
    float numeropopulacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade_populacional2; // Nova variável para densidade populacional
    float pitpercapita2;           // Nova variável para Calcular o PIB per Capita

    // CARTA 1
    printf("Digite o Estado 1 \n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite o código da carta 1 \n");
    fgets(codigocarta1, 4, stdin);
    codigocarta1[strcspn(codigocarta1, "\n")] = '\0';
    // Limpa o buffer do teclado caso tenha digitado mais que 3 caracteres
    if (strlen(codigocarta1) == 3 && codigocarta1[2] != '\n')
    {
        while (getchar() != '\n')
            ; // Limpa o buffer
    }

    printf("Digite nome da Cidade 1 \n");
    fgets(nomedacidade1, 50, stdin);
    nomedacidade1[strcspn(nomedacidade1, "\n")] = '\0';

    printf("Digite o número da população 1 \n");
    scanf("%f", &numeropopulacao1);
    while (getchar() != '\n')
        ; // Limpa o buffer

    printf("Digite o Tamanho da Área 1 \n");
    scanf("%f", &area1);
    while (getchar() != '\n')
        ;

    printf("Digite o PIB 1 \n");
    scanf("%f", &pib1);
    while (getchar() != '\n')
        ;

    printf("Digite a quantidade de Pontos Turisticos 1 \n");
    scanf("%d", &pontosturisticos1);
    while (getchar() != '\n')
        ;

    // CARTA 2
    printf("Digite o Estado 2 \n");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite o código da carta 2 \n");
    fgets(codigocarta2, 4, stdin);
    codigocarta2[strcspn(codigocarta2, "\n")] = '\0';
    // Limpa o buffer do teclado caso tenha digitado mais que 3 caracteres
    if (strlen(codigocarta2) == 3 && codigocarta2[2] != '\n')
    {
        while (getchar() != '\n')
            ; // Limpa o buffer
    }

    printf("Digite nome da Cidade 2 \n");
    fgets(nomedacidade2, 50, stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = '\0';

    printf("Digite o número da população 2 \n");
    scanf("%f", &numeropopulacao2);
    while (getchar() != '\n')
        ;

    printf("Digite o Tamanho da Área 2 \n");
    scanf("%f", &area2);
    while (getchar() != '\n')
        ;

    printf("Digite o PIB 2 \n");
    scanf("%f", &pib2);
    while (getchar() != '\n')
        ;

    printf("Digite a quantidade de Pontos Turisticos 2 \n");
    scanf("%d", &pontosturisticos2);
    while (getchar() != '\n')
        ;

    // CÁLCULO DA DENSIDADE POPULACIONAL
    densidade_populacional1 = numeropopulacao1 / area1; // População dividida pela área
    densidade_populacional2 = numeropopulacao2 / area2; // População dividida pela área
    pitpercapita1 = pib1 / numeropopulacao1;            // PIB dividido pela população
    pitpercapita2 = pib2 / numeropopulacao2;            // PIB dividido pela população

    // EXIBIÇÃO DOS DADOS DA CARTA 1
    printf("\nCarta 1 - Estado: %s\n", nome1);
    printf("Carta 1 - Código: %s\n", codigocarta1);
    printf("Carta 1 - Nome da Cidade: %s\n", nomedacidade1);
    printf("Carta 1 - Número da População: %.3f\n", numeropopulacao1);
    printf("Carta 1 - Tamanho do território: %.3f\n", area1);
    printf("Carta 1 - PIB: %.3f\n", pib1);
    printf("Carta 1 - Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Carta 1 - Densidade Populacional: %.3f hab/km²\n", densidade_populacional1);
    printf("Carta 1 - PIB per Capita: %.3f \n", pitpercapita1);

    // EXIBIÇÃO DOS DADOS DA CARTA 2
    printf("\nCarta 2 - Estado: %s\n", nome2);
    printf("Carta 2 - Código: %s\n", codigocarta2);
    printf("Carta 2 - Nome da Cidade: %s\n", nomedacidade2);
    printf("Carta 2 - Número da População: %.3f\n", numeropopulacao2);
    printf("Carta 2 - Tamanho do território: %.3f\n", area2);
    printf("Carta 2 - PIB: %.3f\n", pib2);
    printf("Carta 2 - Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Carta 2 - Densidade Populacional: %.3f hab/km²\n", densidade_populacional2);
    printf("Carta 2 - PIB per Capita: %.3f \n", pitpercapita2);

    return 0;
}