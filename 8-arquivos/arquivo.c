#include <stdio.h>
#define DIM 50
#define TAMANHO_TEXTO 255

int main(void){

	//arquivo e variaveis
	FILE* arq;
	arq = fopen("texto.txt", "a");

	int numero = 10;
	char nome[DIM] = "Computacao I ";

	char texto[TAMANHO_TEXTO];


	//escrevendo no arquivo
	fprintf(arq, "Escrevi uma frase\n");
	fprintf(arq, "Outra frase com variaveis: %s eh %d\n", nome, numero);

	//fechando e salvando oque acabou de ser escrito
	fclose(arq);

	
	

	//preparando arquivo para ler
	arq = fopen("texto.txt", "r");
	
	//lendo oque esta salvo no arquivo
	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	fgets(texto, TAMANHO_TEXTO, (FILE*) arq);
	printf("%s", texto);

	/*
	printf("Insira uma frase: ");
	fgets(texto, TAMANHO_TEXTO, stdin);
	puts(texto, arq);

	Outra forma de captar um texto
	E escrever no arquivo
	*/


	//fechando e salvando arquivo
	fclose(arq);

	system("pause");

	return 0;
}