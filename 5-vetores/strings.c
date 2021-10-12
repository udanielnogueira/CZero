#include <stdio.h>
#include <string.h>
main(){

    char nome[50]="Daniel";
    char sobre[50]="Nogueira";
    int comp;
    int tamanho;

    strcat(nome, sobre); //DanielNogueira
    strncat(nome, sobre, 2); //DanielNogueiraNo

    comp = strcmp(nome, sobre);
    comp = strncmp(nome, sobre, 15);

    strcpy(nome, "copiado");

    tamanho = strlen(nome);

    strupr(nome);

    printf("%d\n", comp);
    printf("tamanho de %s: %d\n", nome, tamanho);

    system("pause");

}
