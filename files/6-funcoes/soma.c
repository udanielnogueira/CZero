#include <stdio.h>

//function's prototype
//or int soma(int, int)
int soma(int x, int y); 

int main(int argc, char *argv[]) {

    int a = 10, b = 2;
    printf("soma: %d\n", soma(a,b));

    system("pause");

    return 0;
}

//function's definition
int soma(int x, int y) {

    return x + y;
}
