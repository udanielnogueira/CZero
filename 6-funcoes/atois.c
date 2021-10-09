#include <stdio.h>
int main(int argc, char *argv[])
{
    int x, y;

    x=atoi(argv[1]);
    y=atoi(argv[2]);

    printf("multiplicacao: %d\n", x*y);

    system("pause");

    return 0;
}
