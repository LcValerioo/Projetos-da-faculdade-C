#include<stdio.h>

int main() {
    int a = 10, b = 3;
    float c = 5.1, d = 3.75;

    float cociente = (float) a / b; // 'a' é explicitamente convertido para float
    printf("O cociente é %.2f\n", cociente);

    int resul = (int) c * d; 
    printf("O resultado é %d", resul);

    return 0; 
}