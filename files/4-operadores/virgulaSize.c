#include <stdio.h>
main()
{
    int x;
    int y;
    double z = 1.50;

    y = (x = 1, y = x + 1, y + z);
    printf("y=%d\n", y);

    printf("tamanho de x:%d bytes\n", sizeof x);
    printf("tamanho de y:%d bytes\n", sizeof y);
    printf("tamanho de z:%d bytes\n", sizeof z);
    printf("tamanho de int:%d bytes\n", sizeof(int));
    printf("tamanho de double:%d bytes\n", sizeof(double));

    system("pause");
}