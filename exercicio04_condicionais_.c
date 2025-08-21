#include <stdio.h>

int main()
{
	float base;
	float altura;
	float perimetro;
	float area;


	printf("Qual a base?:");
	scanf("%f",&base);

	printf("Qual a altura?:");
	scanf("%f",&altura);

	perimetro= 2*base + 2*altura;
	printf ("Perimetro= %.2f \n", perimetro);

	area= base*altura;
	printf("Area= %.2f \n", area);

	if (area > perimetro) {
		printf("A area eh maior que o perimetro");
	} else if (area < perimetro) {
		printf("A area nao eh maior que o perimetro");
	} else {
		printf("A area eh igual ao perimetro");
	}

	return 0;
}
