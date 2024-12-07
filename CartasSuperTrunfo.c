#include <stdio.h>
#include <stdlib.h>

int main() {
    // Início do programa
    printf("Olá, vamos cadastrar uma carta?\n");

    // Inicializando as variáveis
    char nome[50];
    char estado;
    int pTuristico, codCarta, pop = 0;
    float area, pib, pibper, dpop = 0.0;

    // Cadastrando as cartas (input de dados)
    printf("Digite o Estado (letra): \n");
    scanf(" %c", &estado);

    printf("Digite o Código da cidade: \n");
    scanf("%d", &codCarta);

    getchar(); // Limpa o buffer antes de usar fgets
    printf("Digite o nome da cidade: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' do final da string capturada por fgets

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%f", &pop);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pTuristico);

    // Fazendo o cálculo do PIB per capita e da densidade populacional
    pibper = (float) pib * 1000000000 / (pop * 1000000); // Convertendo unidades
    dpop = (float) pop / area;

    // Exibindo as informações (output de dados)
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, codCarta);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", pop);
    printf("Área: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f hab/km²\n", dpop);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f reais\n", pibper);
    printf("Número de pontos turísticos: %d\n", pTuristico);

    // Fim do programa
    return 0;
}