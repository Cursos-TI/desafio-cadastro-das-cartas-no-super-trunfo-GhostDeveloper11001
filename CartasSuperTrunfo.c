#include <stdio.h>

int main() {

    char a; // Início do programa
    char estado, estado2;
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];

    int turismo, turismo2;
    double densidade, densidade2;
    double riqueza, riqueza2, area, area2, pib, pib2, populacao, populacao2;

    char r, r2; // para mostrar cada carta separadamente
    char f;     // para mostrar o resultado final

    printf("Bem vindo ao Super Trunfo! Vamos montar 2 cartas com características de uma cidade:\n");

    printf("Digite QUALQUER LETRA e dê ENTER para iniciarmos: ");
    scanf(" %c", &a);

    // CARTA 1
    printf("CARTA 1:\n");
    printf("Escolha um dos 8 estados brasileiros (digite apenas a inicial): ");
    scanf(" %c", &estado);

    printf("Agora crie o código da sua carta (ex: P01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", cidade);

    printf("Qual é a população atual desta cidade (sem pontos ou vírgulas)?: ");
    scanf("%lf", &populacao);

    printf("Qual é a área da cidade em km² (sem pontos ou vírgulas)?: ");
    scanf("%lf", &area);

    printf("Qual é o PIB (sem pontos ou vírgulas)?: ");
    scanf("%lf", &pib);

    printf("Quantos pontos turísticos ela possui?: ");
    scanf("%d", &turismo);

    printf("DIGITE 'r' para ver sua carta: ");
    scanf(" %c", &r);

    densidade = populacao / area;  // corrigido
    riqueza = pib / populacao;

    printf("\nCARTA 01:\n");
    printf(" -INICIAL: %c\n", estado);
    printf(" -CODIGO: %s\n", codigo);
    printf(" -CIDADE: %s\n", cidade);
    printf(" -POPULACAO: %.0f habitantes\n", populacao);
    printf(" -AREA: %.2f km²\n", area);
    printf(" -PIB: %.2f reais\n", pib);
    printf(" -PONTOS TURISTICOS: %d\n", turismo);
    printf(" -Densidade Populacional: %.2f hab/km²\n", densidade);
    printf(" -PIB per Capita: %.2f reais\n", riqueza);
    printf("-------------------------------------------\n");

    // CARTA 2
    printf("\nAgora o mesmo procedimento para a CARTA 2...\n");
    printf("CARTA 2:\n");
    printf("Escolha um dos 8 estados brasileiros (digite apenas a inicial): ");
    scanf(" %c", &estado2);

    printf("Agora crie o código da sua carta (ex: P01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", cidade2);

    printf("Qual é a população atual desta cidade (sem pontos ou vírgulas)?: ");
    scanf("%lf", &populacao2);

    printf("Qual é a área da cidade em km² (sem pontos ou vírgulas)?: ");
    scanf("%lf", &area2);

    printf("Qual é o PIB (sem pontos ou vírgulas)?: ");
    scanf("%lf", &pib2);

    printf("Quantos pontos turísticos ela possui?: ");
    scanf("%d", &turismo2);

    printf("DIGITE 'r' para ver sua carta: ");
    scanf(" %c", &r2);

    densidade2 = populacao2 / area2;  // corrigido
    riqueza2 = pib2 / populacao2;

    printf("\nCARTA 02:\n");
    printf(" -INICIAL: %c\n", estado2);
    printf(" -CODIGO: %s\n", codigo2);
    printf(" -CIDADE: %s\n", cidade2);
    printf(" -POPULACAO: %.0f habitantes\n", populacao2);
    printf(" -AREA: %.2f km²\n", area2);
    printf(" -PIB: %.2f reais\n", pib2);
    printf(" -PONTOS TURISTICOS: %d\n", turismo2);
    printf(" -Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf(" -PIB per Capita: %.2f reais\n", riqueza2);
    printf("-------------------------------------------\n");

    // RESULTADO FINAL
    printf("\nPERFEITO! Agora DIGITE 'f' para o resultado das 2 cartas: ");
    scanf(" %c", &f);

    printf("\nCARTA 01:\n");
    printf(" -INICIAL: %c\n", estado);
    printf(" -CODIGO: %s\n", codigo);
    printf(" -CIDADE: %s\n", cidade);
    printf(" -POPULACAO: %.0f habitantes\n", populacao);
    printf(" -AREA: %.2f km²\n", area);
    printf(" -PIB: %.2f reais\n", pib);
    printf(" -PONTOS TURISTICOS: %d\n", turismo);
    printf(" -Densidade Populacional: %.2f hab/km²\n", densidade);
    printf(" -PIB per Capita: %.2f reais\n", riqueza);
    printf("-------------------------------------------\n");

    printf("\nCARTA 02:\n");
    printf(" -INICIAL: %c\n", estado2);
    printf(" -CODIGO: %s\n", codigo2);
    printf(" -CIDADE: %s\n", cidade2);
    printf(" -POPULACAO: %.0f habitantes\n", populacao2);
    printf(" -AREA: %.2f km²\n", area2);
    printf(" -PIB: %.2f reais\n", pib2);
    printf(" -PONTOS TURISTICOS: %d\n", turismo2);
    printf(" -Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf(" -PIB per Capita: %.2f reais\n", riqueza2);
    printf("-------------------------------------------\n");

    return 0;
}
