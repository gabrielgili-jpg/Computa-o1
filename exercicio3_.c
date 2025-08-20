#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Digite um valor inteiro: ");
    scanf("%d", &i);

    printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%f", &f);

    printf("Você digitou:\n");
    printf("Caractere: %c\n", c);
    printf("Inteiro: %d\n", i);
    printf("Número de ponto flutuante: %.2f\n", f);

    return 0;
}
