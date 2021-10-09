#include <stdio.h>
#include <string.h>
#define DIM 101
main()
{
    char palavra[DIM];
    char letra;
    int i;

    puts("Digite uma frase");
    gets(palavra);

    printf("Qual letra dessa frase deseja procurar: ");
    letra = getchar();

    printf("A letra %c aparece na posicao ", letra);
    for(i=0; i<strlen(palavra); i++){
        if(letra == palavra[i]) printf("%d ", i+1);
    }
    printf("\n");


    system("pause");
}
