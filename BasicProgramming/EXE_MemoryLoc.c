//Compreendendo o uso das diferentes memórias no computador
//Memória Heap e Memória Stack

#include <stdlib.h>
#include <stdio.h>

int main(){

    //Memória Stack: Tamanho limitado

    char c1;        // 1 Byte
    char c2;        // 1 Byte
    char c3;        // 1 Byte
    char c4;        // 1 Byte
    char *ponteiro; // 8 Bytes -> 64bits

    //Memória Heap: Acesso a toda memória principal disponível no computador

    ponteiro = (char *) malloc(100); //Com o ponteiro podemos apontar para uma variável na memória Stack mas pedir para ser alcoado (nesse caso) 100 bytes

    //Sempre temos que liberar a memória em seguida:

    free(ponteiro);

    printf("Qual é o tamanho de uma char? %d byte\n", sizeof(char));
    printf("Qual é o tamanho de uma char * ? %d bytes\n", sizeof(char *));

    return 0;
    
}