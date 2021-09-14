#include <stdio.h>
#include <stdlib.h>

/*Existem várias maneiras de se montar uma struct:
    1 - 
        typedef struct{
            <tipo> var1, var2;
            <tipo> var3;
        } nome_da_struct;
        ...
        <nome_da_struct> var_struct;

*/ // Exemplo:

typedef struct{
    
    char nome[30], endereco[50];
    int dia, mes;
    int ano;

}Pessoa01;

/*
    2 - 
        struct nome_da_struct{
            <tipo> var1, var2;
            <tipo> var3;
        };
        ...
        struct <nome_da_struc> var_struct; 

*/ // Exemplo 02:

struct Pessoa02{
    char nome[30], endereco[50];
    int dia, mes;
    int ano;
};

int main(){

    Pessoa01 p1;
    struct Pessoa02 p2; //Devido a contrucao da struct e necessario chamar aqui

    strcpy(p1.nome, "Adobe");
    scanf("%s", p1.endereco);
    p1.dia = 15;
    p1.mes = 8;

    strcpy(p2.nome, "Obobe");
    scanf("%s", p2.endereco);
    p2.dia = 19;
    p2.mes = 80;

    scanf("%d", &p2.ano);

    return 0;
}