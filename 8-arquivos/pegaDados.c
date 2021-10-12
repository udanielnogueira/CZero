#include <stdio.h>
#define DIM 72

void estrelas(int quantidade){

	int i;
	for(i=0; i<quantidade; i++)
		printf("*");
	printf("\n");
}

void pula(void){
	printf("\n");
}

int main(void){

	FILE* arquivo;
	arquivo = fopen("Listagem BRF.txt", "a");

	char nome[DIM];
	char profissao[DIM];
	char continuar;

	pula();
	estrelas(2*10);
	printf("Bem vindo ao sistema\n");
	estrelas(10+10);
	pula();

	system("pause");

	do{

		system("cls");

		pula();

		printf("Insira os dados\n");
		printf("Nome: ");
		gets(nome);
		printf("Profissao: ");
		gets(profissao);

		fprintf(arquivo, "%s\n", nome);
		fprintf(arquivo, "%s\n", profissao);
		fprintf(arquivo, "\n\n");

		pula();
		printf("<s> sim | <n> nao\n");
		printf("Continuar? ");
		continuar = getchar();
		getchar();

	} while(continuar == 's' || continuar == 'S');

	fclose(arquivo);

	pula();

	system("pause");

	return 0;
}