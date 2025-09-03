#include <stdio.h>

int main() {
	int n;
	double v1, v2, v3;
	double media_ponderada;

	printf("Digite o numero de casos: ");
	scanf("%d", &n);

	printf("Digite os numeros reais: \n");
	 for(int i = 0; i < n; i++) {
	    
	    
	scanf("%lf %lf %lf", &v1, &v2, &v3);
		media_ponderada = (v1 * 2 + v2 * 3 + v3 * 5) / 10.0;
		
		
	printf("A media ponderada: %.1lf\n", media_ponderada);
	}

	return 0;
}
