#include <stdio.h>

//function's prototype
int soma(int x, int y); //or int soma(int, int)

int main(int argc , char *argv[]){

    int a=10, b=2;
    printf("soma: %d\n", soma(a,b));

    system("pause");

    return 0;
}

//function's definition
int soma(int x, int y){

    return x+y;
}
