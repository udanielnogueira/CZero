#include <stdio.h>
int main(void){

    char nome[51];

    printf("Qual seu nome: ");
    gets(nome);
    printf("Bem vindo "); //if here was PUTS, it would jump a line
    puts(nome);

    printf("\n");

    system("pause");

    return 0;
}
