#include <stdio.h>
#include <string.h>

int main() {
	char numero[100];
	int todos_iguais = 1;

	printf("Digite um numero: ");
	scanf("%s", numero);

	int tamanho = strlen(numero);

	for (int i = 1; i < tamanho; i++) {
		if (numero[i] != numero[0]) {
			todos_iguais = 0;
			break;
		}
	}

	if (todos_iguais == 1) {
		printf("Os digitos sao todos iguais!\n");
	} else {
		printf("Os digitos NAO sao todos iguais!\n");
	}

	return 0;
}
