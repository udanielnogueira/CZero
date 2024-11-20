#include <stdio.h>
int main(void)
{
    char letra;

    printf("Diga sua letra preferida: ");
    letra = getchar();

    printf("voce gosta da letra ");
    putchar(letra);
    printf("\n");

    system("pause");

    return 0;
}
