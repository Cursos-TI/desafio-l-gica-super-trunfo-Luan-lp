#include <stdio.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;

    printf ("Digite o primeiro estado: \n");
    scanf("%s", estado1);
   
    printf("Digite o código do seu primeiro estado: \n");
    scanf("%s", codigo1);

    printf ("Escolha a sua primeira cidade: \n");
    scanf ("%s", cidade1);
    
    printf ("Digite a população da primeira cidade: \n");
    scanf ("%d", &populacao1);
   
    printf ("Diga qual é a área da sua primeira cidade: \n");
    scanf ("%f", &area1);
   
    printf ("Diga qual é o PIB de seu primeiro estado: \n");
    scanf ("%f", &PIB1);

    printf ("Diga quantos pontos turísticos possui em seu estado: \n");
    scanf ("%d", &pontosTuristicos1);

    
    printf ("Digite o seu segundo estado: \n");
    scanf("%s", estado2);

    printf ("O código do seu segundo estado é: %s\n", codigo2);
    scanf ("%s", codigo2);

    printf ("Escolha a sua segunda cidade: \n");
    scanf ("%s", cidade2);

    printf ("Digite a população da sua segunda cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Diga qual é a área da sua segunda cidade: \n");
    scanf ("%f", &area2);

    printf ("Diga qual é o PIB de seu segundo estado: \n");
    scanf ("%f", &PIB2);

    printf ("Diga quantos pontos turísticos possui em seu segundo estado: \n");
    scanf ("%d", &pontosTuristicos2);

    printf("\nDados dos Estados:\n");
    printf("Estado 1: %s\n", estado1);
    printf("Cidade 1: %s (Código: %s)\n", cidade1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Estado 2: %s\n", estado2);
    printf("\nCidade 2: %s (Código: %s)\n", cidade2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    char *vencedorPopulacao, *vencedorArea, *vencedorPIB;

    if (populacao1 > populacao2) {
        vencedorPopulacao = cidade1;
    } else if (populacao1 < populacao2) {
        vencedorPopulacao = cidade2;
    } else {
        vencedorPopulacao = "Nenhuma (empate)";
    }

    if (area1 > area2) {
        vencedorArea = cidade1;
    } else if (area1 < area2) {
        vencedorArea = cidade2;
    } else {
        vencedorArea = "Nenhuma (empate)";
    }

    if (PIB1 > PIB2) {
        vencedorPIB = cidade1;
    } else if (PIB1 < PIB2) {
        vencedorPIB = cidade2;
    } else {
        vencedorPIB = "Nenhuma (empate)";
    }

    printf("\nVencedores:\n");
    printf("Vencedor em População: %s\n", vencedorPopulacao);
    printf("Vencedor em Área: %s\n", vencedorArea);
    printf("Vencedor em PIB: %s\n", vencedorPIB);

    
    return 0;
}
