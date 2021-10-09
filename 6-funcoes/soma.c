#include <stdio.h>

//prototipo da funcao
int soma(int x, int y);//ou: int soma(int, int);

int main(int argc , char *argv[]){

    int a=10, b=2;
    printf("soma: %d\n", soma(a,b));

    system("pause");

    return 0;
}

//definicao da funcao
int soma(int x, int y){

    return x+y;
}
