#include <stdio.h>

int main() {
    
    //Inicio do programa
    printf("Olá, vamos cadastrar uma carta ?\n");

    //Inicializando as variaveis
    char nome[50];
    int pTuristico = 0;
    float area, pib, pop = 0;

    //Cadastrando as cartas (input de dados)
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%f", &pop);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pTuristico);

    //Exibindo as informações (output de dados)

    printf("Nome da carta: %s\n", nome);
    printf("Atributos\n");
    printf("População: %f\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turisticos: %d\n", pop, area, pib, pTuristico);

    //Fim do programa

    return 0;
}
