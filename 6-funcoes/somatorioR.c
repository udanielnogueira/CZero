#include <stdio.h>

int somatorio(int num){
    if(num==1)
        return num;
    else
        return num+somatorio(num-1);
}


main(){

    printf("%d\n", somatorio(3));

    system("pause");

    return 0;
}

