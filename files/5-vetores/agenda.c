#include <stdio.h>
main() {

    int i;
    char agenda[4][100] =
    {
        {
            "Quadro da disciplina"
        },
        {
            "Fazer exercicios"
        },
        {
            "Estudar"
        },
        {
            "Just wanne be like U"
        }
    };

    for(i = 0; i < 4; i++)
        printf("%s\n", agenda[i]);
}