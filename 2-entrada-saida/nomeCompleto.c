#include <stdio.h>
int main(void){

    char nome[51];

    printf("Qual seu nome: ");
    gets(nome);
    printf("Bem vindo "); //se aqui fosse puts, pularia na impressao
    puts(nome);

    printf("\n");

    system("pause");

    return 0;
}
