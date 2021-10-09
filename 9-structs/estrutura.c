#include <stdio.h>
#include <string.h>

struct data{
    int dia, mes, ano;
};
typedef struct data Data;

struct aluno{
    char nome[50];
    int idade;
    Data nascimento;
};
typedef struct aluno Aluno;

int soma(int idade){
    return idade=idade+1;
}

int main(void){

    Aluno alunos[10];
    strcpy(alunos[0].nome, "Daniel Nogueira");
    alunos[0].idade=20;

    Data dataDaniel;
    dataDaniel.dia=20;
    dataDaniel.mes=03;
    dataDaniel.ano=2016;

    alunos[0].nascimento=dataDaniel;
    //ou atribuisse diretamente: daniel.nascimento.dia ...
    //ao inves de criar uma estrutura do tipo Data e atribuir a minha estrutura daniel

    printf("%s\n", alunos[0].nome);
    printf("%d\n", alunos[0].idade);
    printf("%d ", alunos[0].nascimento.dia);
    printf("%d ", alunos[0].nascimento.mes);
    printf("%d\n", alunos[0].nascimento.ano);

    printf("idade somada:%d\n", soma(alunos[0].idade));

    system("pause");
}



