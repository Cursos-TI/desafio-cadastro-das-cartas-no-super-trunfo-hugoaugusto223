#include <stdio.h>
#include <string.h>

int main() {
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Informe a População: ");
    scanf("%d", &populacao1);
    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Informe a População: ");
    scanf("%d", &populacao2);
    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibReais1 = pib1 * 1e9f;
    float pibReais2 = pib2 * 1e9f;

    float pibPerCapita1 = pibReais1 / populacao1;
    float pibPerCapita2 = pibReais2 / populacao2;

    printf("Carta 1 - %s (%c):\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%c):\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita2);

    float valor1 = pibPerCapita1;
    float valor2 = pibPerCapita2;
    char atributoNome[] = "PIB per capita";

    int menor_valor_vence = (strcmp(atributoNome, "Densidade Populacional") == 0);

    printf("Comparação de cartas (Atributo: %s):\n\n", atributoNome);
    printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n\n", nomeCidade2, estado2, valor2);

    if (!menor_valor_vence) {
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor2 > valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (valor2 < valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}
