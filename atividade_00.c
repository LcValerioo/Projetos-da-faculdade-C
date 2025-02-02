#include<stdio.h>

int main()
{
    int opcao = 0;
    float n1, n2, media = 0.0;
  
    printf("--- Menu de gerencimaneto de Aluno ! ---\n");
    printf("1. Calcular Média \n2. Determinar Statur \n3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a Média!\n");
        printf("Digite a primeira Nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda Nota: ");
        scanf("%f", &n2);

        //Testar a condição se a nota é >= 0 e <=10
        if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
            media = (n1 + n2)  / 2;
            printf("A Média é %.2f\n", media);
        } else {
            printf("Valores invalidos!\n");
        }
        break;
    case 2: 
    printf("Determinar Status!\n");
    printf("Entre com a Média: ");
    scanf("%f", &media);
    //media >= 5 ? printf("Vocês está Aprovado!\n") : printf("Você está reprovado !\n");

    if (media >= 7)
    {
        printf("Aprovado !\n");
    } else if(media >= 5){
        printf("Recuperação!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    break;
    case 3:
    printf("Saindo do programa!\n");
    break;
    default:
        break;
    }
        
    printf("\n\n---- FIM DO PROGRAMA ----\n\n");
}