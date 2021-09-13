#include <stdio.h>
#include <stdlib.h>

//Alocação de matriz com ponteiros

#define NLINHAS 4
#define NCOLUNAS 4

void MPonteiro (){

    int **matriz, linha=4,coluna=3, i, j;

    matriz = (int **) malloc(sizeof(int)*linha);
    
    for(i=0; i<linha; i++)
        matriz[i] = (int *)malloc(sizeof(int)*coluna);
    
    for(i=0; i<linha; i++)
        for(j=0; j<coluna; j++)
            matriz[i][j] = i*10+j;
    
    for(i=0; i<linha; i++){

        for(j=0; j<coluna; j++)
            printf("%d", matriz[i][j]);
        printf("\n");
    }
        
}


int main(){

    int matriz[NLINHAS][NCOLUNAS]={{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}},
        *pmat,
        linha = 2, coluna = 1;

    pmat = matriz[0]; //Inicializa o ponteiro na posição [0][0] da matriz

    *(pmat+linha*NCOLUNAS+coluna) = 13;
    matriz[1][3] = 15;
    for(linha = 0; linha<NLINHAS; linha++)
        for(coluna=0; coluna<NCOLUNAS; coluna++)
            printf("M[%d][%d] = %d\t*(pmat+(%d %d))=%d\n",linha,coluna,matriz[linha][coluna],linha,coluna,*(pmat+linha*NCOLUNAS+coluna));

    int exe;
    printf("Executar o proximo codigo? 1 = sim - 2 = n");
    scanf("%d", &exe);
    if(exe == 1){
        MPonteiro();
    }

    return 0;

}