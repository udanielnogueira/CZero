#include <stdio.h>
#include <string.h>
#define DIM 1000
main()
{
    int i;
    char frase[DIM];

    printf("Insira sua frase\n-> ");
    gets(frase);

    printf("\nCriptografando...\n");
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' ')
            frase[i] = frase[i] + 1;
    }
    printf("Frase criptografada\n-> ");
    puts(frase);

    system("pause");

}
