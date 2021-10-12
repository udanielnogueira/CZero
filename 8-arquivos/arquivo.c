#include <stdio.h>
#define DIM 50
#define TAMANHO_TEXTO 255

int main(void){

	//file and variables
	FILE* arq;
	arq = fopen("texto.txt", "a");

	int numero = 10;
	char nome[DIM] = "Computacao I ";

	char texto[TAMANHO_TEXTO];

	//writing 
	fprintf(arq, "Escrevi uma frase\n");
	fprintf(arq, "Outra frase com variaveis: %s eh %d\n", nome, numero);

	//closing
	fclose(arq);

	//preparing to read
	arq = fopen("texto.txt", "r");
	
	//reading
	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	//printf("Insira uma frase: ");
	//fgets(texto, TAMANHO_TEXTO, stdin);
	//puts(texto, arq);
	//It's another way to read and write

	//closing and saving
	fclose(arq);

	system("pause");

	return 0;
}