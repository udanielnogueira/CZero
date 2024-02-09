#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 50

struct Aluno_ {

	char nome[DIM];
	float n1, n2, media;
};
typedef struct Aluno_ Aluno;

int main(void) {

	Aluno *ponteiro;

	ponteiro = (Aluno *) malloc(sizeof(Aluno));

	printf("Insira o nome do aluno: ");
	gets(ponteiro -> nome);

	printf("\n");

	printf("Insira as notas: ");
	scanf("%f %f", &(ponteiro -> n1), &(ponteiro -> n2));
	ponteiro -> media = ( ponteiro -> n1 + ponteiro -> n2 ) / 2;
	printf("\n\nMedia do aluno %s: %.2f\n\n", ponteiro -> nome, ponteiro -> media);

	free(ponteiro);

	system("pause");

	return 0;
}
