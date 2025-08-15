#include <stdio.h>

int main() {
    // Variáveis corrigidas para strings
    char iniciar[50];
    char estado, estado2;
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int turismo, populacao, area;
    int turismo2, populacao2, area2;
    char resultado[50], resultado2[50];
    float pib, pib2;
    char final[50];

    printf("Bem vindo ao Super Trunfo! Vamos montar 2 cartas com características de uma cidade:\n");

    printf("Digite 'iniciar' e dê ENTER para iniciarmos: ");
    scanf("%s", iniciar);

    // CARTA 1
    printf("CARTA 1:\n");
    printf("Escolha um dos 8 estados brasileiros (digite apenas a inicial): ");
    scanf(" %c", &estado);

    printf("Agora crie o código da sua carta (ex: P01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", cidade);

    printf("Qual é a população atual desta cidade (sem pontos ou vírgulas)?: ");
    scanf("%d", &populacao);

    printf("Qual é a área da cidade em km² (sem pontos ou vírgulas)?: ");
    scanf("%d", &area);

    printf("Qual é o PIB (sem pontos ou vírgulas)?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos ela possui?: ");
    scanf("%d", &turismo);

    printf("Digite 'resultado' para ver sua carta: ");
    scanf("%s", resultado);

    printf("\nCARTA 01:\n");
    printf(" -INICIAL: %c\n", estado);
    printf(" -CODIGO: %s\n", codigo);
    printf(" -CIDADE: %s\n", cidade);
    printf(" -POPULACAO: %d\n", populacao);
    printf(" -AREA: %d km²\n", area);
    printf(" -PIB: %.2f bilhões de reais\n", pib);
    printf(" -PONTOS TURISTICOS: %d\n", turismo);
    printf("-------------------------------------------\n");

    // CARTA 2
    printf("\nAgora o mesmo procedimento para a CARTA 2...\n");
    printf("CARTA 2:\n");
    printf("Escolha um dos 8 estados brasileiros (digite apenas a inicial): ");
    scanf(" %c", &estado2);

    printf("Agora crie o código da sua carta (ex: R03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", cidade2);

    printf("Qual é a população atual desta cidade (sem pontos ou vírgulas)?: ");
    scanf("%d", &populacao2);

    printf("Qual é a área da cidade em km² (sem pontos ou vírgulas)?: ");
    scanf("%d", &area2);

    printf("Qual é o PIB (sem pontos ou vírgulas)?: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos ela possui?: ");
    scanf("%d", &turismo2);

    printf("Digite 'resultado' para ver sua carta: ");
    scanf("%s", resultado2);

    printf("\nCARTA 02:\n");
    printf(" -INICIAL: %c\n", estado2);
    printf(" -CODIGO: %s\n", codigo2);
    printf(" -CIDADE: %s\n", cidade2);
    printf(" -POPULACAO: %d\n", populacao2);
    printf(" -AREA: %d km²\n", area2);
    printf(" -PIB: %.2f bilhões de reais\n", pib2);
    printf(" -PONTOS TURISTICOS: %d\n", turismo2);
    printf("-------------------------------------------\n");

    // RESULTADO FINAL
    printf("\nPERFEITO! Agora digite 'final' para o resultado das 2 cartas: ");
    scanf("%s", final);

    printf("\n===== RESULTADO FINAL =====\n");
    printf("CARTA 01:\n");
    printf(" -INICIAL: %c\n", estado);
    printf(" -CODIGO: %s\n", codigo);
    printf(" -CIDADE: %s\n", cidade);
    printf(" -POPULACAO: %d\n", populacao);
    printf(" -AREA: %d km²\n", area);
    printf(" -PIB: %.2f bilhões de reais\n", pib);
    printf(" -PONTOS TURISTICOS: %d\n", turismo);
    printf("-------------------------------------------\n");

    printf("CARTA 02:\n");
    printf(" -INICIAL: %c\n", estado2);
    printf(" -CODIGO: %s\n", codigo2);
    printf(" -CIDADE: %s\n", cidade2);
    printf(" -POPULACAO: %d\n", populacao2);
    printf(" -AREA: %d km²\n", area2);
    printf(" -PIB: %.2f bilhões de reais\n", pib2);
    printf(" -PONTOS TURISTICOS: %d\n", turismo2);
    printf("------------------------------\n");

    return 0;
}
