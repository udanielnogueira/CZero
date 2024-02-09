#include <stdio.h>

//variavel global
int i = 0;

void aumenta(void) {

    i++;
    printf("%d\n", i);
}

int main(void) {

    i = 10;
    printf("valor de i alterado na main: %d\n", i);
    printf("valor de i alterado na funcao: ");
    aumenta();

    system("pause");

    return 0;
}
