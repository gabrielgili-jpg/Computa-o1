#include <stdio.h>

int main()
{
	int alunos;
	int monitores;
	int total;


	printf("Qual a quantidade de alunos que irC#o enrar?:");
	scanf("%d", &alunos);

	printf("Qual a quantidade de monitores?:");
	scanf("%d", &monitores);

	total=alunos+monitores;

	if (total <=50)
		printf("Possivel levar todos!");
	else
		printf ("Impossivel levar todos!");

	return 0;
}
