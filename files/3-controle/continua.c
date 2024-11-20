#include <stdio.h>
main()
{
    char c;

    printf("Digite sempre c para continuar\n");
    while((c=getchar()) == 'c')
    {
        printf("c foi apertado\n");
        getchar(); //it deletes the ENTER key

    }
    puts("voce apertou outro\n");

    system("pause");
}
