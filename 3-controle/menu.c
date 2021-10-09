#include <stdio.h>
main(){

    char alternativa;
    char pula;

    do
    {
        system("cls");
        puts("MENU");
        puts("a)traduzir \"house\"");
        puts("b)traduzir \"knife\"");
        printf("alternativa: ");
        alternativa = getchar();
        getchar();

        switch(alternativa)
        {
            case 'a':
            case 'A':
                puts("\ntraducao: casa\n");
                break;
            case 'b':
            case 'B':
                puts("\ntraducao: faca\n");
                break;
            default:
                puts("\nalternativa invalida\n");


        }

        printf("Voltar ao menu? <s>sim <n>nao ");
        pula = getchar();
        getchar();


    }while(pula=='s' || pula=='S');


}
