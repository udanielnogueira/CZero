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

//i is a local variable in the function
void pares(){
    int i;
    for(i=0; i<=10; i+=2){
        printf("%d ", i);
    }
}

//virg is a local variable in the block
void impares(){
    int i;
    for(i=1; i<=11; i+=2){
        char virg =',';
        if(i==11)
            virg='\0';
        printf("%d%c", i, virg);

    }
}
