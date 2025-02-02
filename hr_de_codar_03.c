#include<stdio.h>

int main()
{
    //Inicializando Variaveis
    int numJogador, numComputador = 0;
    int opcao = 0;

    //Gerar o numero aleatorio
    srand(time(0));
    numComputador = rand() % 100 + 1; //Gerando numero aleatorio de 1 e 100

    //Inicio do Jogo
    printf("Vamos testar sua intuição ?\nEscolha se você vai: \n");
    printf("1. Empatar com o Coputador\n2. Escolher um numero maior\n3.Escolher um numero menor\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("Boa, agora escolha um numero de 1 à 100: ");
    scanf("%d", &numJogador);    

    switch (opcao)
    {
    case 1:
        if(numJogador == numComputador){
            printf("Parabéns, você acertou !!!\n");
            printf("Seu numero: %d = Numero do Computador: %d", numJogador, numComputador);
        } else if(numJogador > numComputador){
            printf("Você errou, pois seu numero é maior do que o do computador !!!\n");
            printf("Seu numero: %d > Numero do Computador: %d", numJogador, numComputador);
        } else {
            printf("Você errou, pois seu numero é menor do que o do computador !!!\n");
            printf("Seu numero: %d < Numero do Computador: %d", numJogador, numComputador);
        }
        break;    
        case 2:
        if(numJogador == numComputador){
            printf("Você errou, pois seu numero é igual do que o do computador !!!\n");
            printf("Seu numero: %d = Numero do Computador: %d", numJogador, numComputador);
        } else if(numJogador > numComputador){
            printf("Parabéns, você acertou !!!\n");
            printf("Seu numero: %d > Numero do Computador: %d", numJogador, numComputador);
        } else {
            printf("Você errou, pois seu numero é menor do que o do computador !!!\n");
            printf("Seu numero: %d < Numero do Computador: %d", numJogador, numComputador);
        }
        break;    
        case 3:
        if(numJogador == numComputador){
            printf("Você errou, pois seu numero é igual do que o do computador !!!\n");
            printf("Seu numero: %d = Numero do Computador: %d", numJogador, numComputador);
        } else if(numJogador > numComputador){
            printf("Você errou, pois seu numero é maior do que o do computador !!!\n");
            printf("Seu numero: %d > Numero do Computador: %d", numJogador, numComputador);
        } else {
            printf("Parabéns, você acertou !!!\n");            
            printf("Seu numero: %d < Numero do Computador: %d", numJogador, numComputador);
        }
        break;    
    default:
        printf("Opção Inválida");
        break;
    }
    printf("\n\n---FIM DO PROGRAMA---\n\n");
    return 0;
}