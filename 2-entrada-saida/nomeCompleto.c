#include <stdio.h>
int main(void) {

    char nome[51];

    printf("Qual seu nome? ");
    gets(nome);

    printf("Bem vindo "); // puts pularia linha
    puts(nome);

    printf("\n");

    system("pause");

    return 0;
}
