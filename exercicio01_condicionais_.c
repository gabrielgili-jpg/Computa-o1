#include <stdio.h>

int main()
{
	int alunos;
	int monitores;
	int total;


	printf("Qual a quantidade de alunos que irão entrar?:");
	scanf("%d", &alunos);

	printf("Qual a quantidade de monitores?:");
	scanf("%d", &monitores);

	total=alunos+monitores;

	if (total <=50)
		printf("Possivel levar todos em apenas uma viagem!");
	else
		printf ("Impossivel levar todos em apenas uma viagem!");

	return 0;
}
