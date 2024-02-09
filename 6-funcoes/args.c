#include <stdio.h>
main(int argc, char *argv[]) {

    int i;

    for(i = 0; i < argc; i++){
        printf("parametro argv[%d]: %s\n", i, argv[i]);
    }

    system("pause");

    return 0;
}
