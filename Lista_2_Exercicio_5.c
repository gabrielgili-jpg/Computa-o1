#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, chute, tentativas = 0;

    srand(time(NULL));
    numero_sorteado = rand() % 500 + 1;

    printf("Tente adivinhar o numero magico entre 1 e 500!\n");

    
    printf("Digite seu chute: ");
    scanf("%d", &chute);
    tentativas++;

    
    while (chute != numero_sorteado) {
        if (chute > numero_sorteado) {
            printf("Seu chute eh maior que o numero magico.\n");
        } else {
            printf("Seu chute eh menor que o numero magico.\n");
        }

        printf("Tente novamente: ");
        scanf("%d", &chute);
        tentativas++;
    }

    
    printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);

    if (tentativas <= 3) {
        printf("\\o/\n");
    } else if (tentativas <= 6) {
        printf(":-D\n");
    } else if (tentativas <= 10) {
        printf(":-)\n");
    } else {
        printf(":-\\\n");
    }

    return 0;
}
