#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[20], endereco[50];
    int dia, mes;
    int ano;

} Pessoa01;

typedef struct {

    Pessoa01 *pPessoa;
    int QtdPessoas;

} LISTAPESSOAS;

void CriarListaVazia(LISTAPESSOAS *listaP){ // alocacao dinamica do vetor com capacidade para o armazenamento das informacoes relativas a 10 pessoas
    listaP->pPessoa = (Pessoa01 *) malloc(10*sizeof(Pessoa01));
    listaP->QtdPessoas=0;
}

int BuscarRegistro(char *nome, LISTAPESSOAS listaP, Pessoa01 *pessoa){

    int i=0;
    if(listaP.QtdPessoas==0)
        return -1; //Indica que a lista esta vazia
    for(; i<listaP.QtdPessoas; i++)
        if(!strcmp(nome,(listaP.pPessoa+i)->nome)){
            pessoa = (listaP.pPessoa+i);
            return i;
        }
    return -2; //Indica que nenhum registro foi encontrado

}

int InserirRegistro(Pessoa01 pessoa, LISTAPESSOAS * listaP, int pos){
    int i;
    if(listaP->QtdPessoas==10)
        return -1; //Indica que a lista esta cheia
    if(pos > listaP->QtdPessoas)
        return -2; //Indica que posicao extrapola o limite do vetor
    for(i=listaP->QtdPessoas; i >=pos; i--) //faz uma copia da celula "i - 1" para a celula "i" e libera a celula pos
        memcpy((listaP->pPessoa + i),(listaP->pPessoa + i -1),sizeof(Pessoa01));
    memcpy((listaP->pPessoa+pos), &pessoa,sizeof(Pessoa01));
    (listaP->QtdPessoas)++;
}

//memcpy: efetua a copia das informacoes de acordo com o formato: “memcpy(destino,fonte,quantidade_bytes);”

int RemoverRegistro(LISTAPESSOAS *listaP, int pos){
    int i;
    if(listaP->QtdPessoas==0)
        return -1; //Indica que a lista esta vazia
    if(pos >= listaP->QtdPessoas)
        return -2; //Indica que posicao extrapola o limite do vetor
    for(i=pos; i < listaP->QtdPessoas - 1; i++)
        memcpy((listaP->pPessoa+i),(listaP->pPessoa+i+1),sizeof(Pessoa01));
    (listaP->QtdPessoas)--;
}

//remoção realiza um deslocamento do conteúdo para a esquerda em cada iteração do laço
//Neste caso, a posição “i” recebe o conteúdo da posição “i + 1”. Ao final do deslocamento, a quantidade de itens armazenados no vetor é decrementada em uma unidade.


int main (){

    CriarListaVazia;

    return 0;
}

/*

Alocações dinâmicas são extremamente úteis para a criação de códigos escaláveis.
Escalabilidade de um programa refere-se à sua facilidade para se adequar a outras dimensões de massa de dados que será manipulada.
Além das listas encadeadas, podemos usar a alocação dinâmica em outras estruturações, tais como: listas duplamente encadeadas e árvores.

*/