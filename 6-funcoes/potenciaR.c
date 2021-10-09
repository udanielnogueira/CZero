#include <stdio.h>

int potencia(int x, int n){
    if(n==0)
        return 1;
    else{
        return x*potencia(x, n-1);
    }
}

main(){

    printf("%d\n", potencia(3,4));

    system("pause");

    return 0;
}
