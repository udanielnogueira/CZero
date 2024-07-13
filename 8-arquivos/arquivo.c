#include <stdio.h>
#define DIM 50
#define TAMANHO_TEXTO 255

int main(void) {

	// File and variable
	FILE* arq;
	arq = fopen("texto.txt", "a");

	int numero = 10;
	char nome[DIM] = "Computacao I ";

	char texto[TAMANHO_TEXTO];

	// Writing 
	fprintf(arq, "Escrevi uma frase\n");
	fprintf(arq, "Outra frase com variaveis: %s eh %d\n", nome, numero);

	// Closing
	fclose(arq);

	// Preparing to read
	arq = fopen("texto.txt", "r");
	
	//Reading
	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	// Another way to read and write	
	// printf("Insira uma frase: ");
	// fgets(texto, TAMANHO_TEXTO, stdin);
	// puts(texto, arq);
	
	//closing and saving
	fclose(arq);

	system("pause");

	return 0;
}