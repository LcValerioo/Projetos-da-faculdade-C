#include <stdio.h>

int main(){
    //Declarando variaveis
    int n1, n2;
    int soma, sub, multi, div;

    //Colendo os dados do usuario
    printf("Digite o n1: ");
    scanf("%d", &n1);
    printf("Digite o n2: ");
    scanf("%d", &n2);

    //Operações 
    soma = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    div = n1 / n2;

    //Exibindo os resultado
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", sub);
    printf("A Multiplicação é: %d\n", multi);
    printf("A Divisão é: %d\n", div);

    return 0;
}