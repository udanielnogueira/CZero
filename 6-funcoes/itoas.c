#include <stdio.h>
#define DIM 51
int main(int argc, char *argv[]){

    int valor_int=10;
    char valor_char[DIM];

    itoa(valor_int, valor_char, 10); //10 is the numerical system, could be 2, 8, 16...

    printf("%s\n", valor_char);

    system("pause");

    return 0;
}
