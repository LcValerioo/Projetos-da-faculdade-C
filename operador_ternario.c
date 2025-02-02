#include<stdio.h>

int main(){
    int idade = 0;
    int resultado;
    int temperatura;
    char* estado;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    idade >= 18 ? printf("\nVocê é maior de idade !\n") : printf("\nVocê é menor de idade !\n");

    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    estado = (temperatura > 30) ? "Calor" : "Frio";
    printf("Estado: % s\n", estado);

    return 0;
}