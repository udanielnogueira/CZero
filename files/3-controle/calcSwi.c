#include <stdio.h>
main(void) {

    float x, y, resultado;
    char operador;

    printf("CALCULADORA DE REAIS\n");
    
    printf("digite uma operacao do tipo: digito(sinal)digito\n");
    scanf("%f %c %f",&x,&operador,&y);

    switch(operador)
    {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            printf("digite um operador valido");

    }

    printf("resultado:%.2f", resultado);
}
