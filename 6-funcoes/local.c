#include <stdio.h>

void pares();

void impares();

main(){

    pares();
    printf("\n");
    impares();

    system("pause");

    return 0;
}

//i uma variavel local na funcao
void pares(){
    int i;
    for(i=0; i<=10; i+=2){
        printf("%d ", i);
    }
}

//virg uma varivel local no bloco
void impares(){
    int i;
    for(i=1; i<=11; i+=2){
        char virg =',';
        if(i==11)
            virg='\0';
        printf("%d%c", i, virg);

    }
}
