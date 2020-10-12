#include <stdio.h>

void multMatriz(int **matA, int **matB, int **matC, int linhaA, int colunaA, int colunaB){

    int i, j, k, aux;

    for(i = 0; i < linhaA; i++){
        for(j = 0; j < colunaB; j++){
            aux = 0;
            for(k = 0; k < colunaA; k++){
                aux = aux + matA[i][k] * matB[k][j];
            }

            matC[i][j] = aux;
        }
    }
}

int main()
{

    int i, j, k;
    int linhaA, colunaA, linhaB ,colunaB;
    int **matA, **matB, **matC;

    printf("Digite a quantidade de linhas da Matriz A: ");
    scanf("%d", &linhaA);
    printf("Digite a quantidade de colunas da Matriz A: ");
    scanf("%d", &colunaA);
    printf("Digite a quantidade de linhas da Matriz B: ");
    scanf("%d", &linhaB);
    printf("Digite a quantidade de colunas da Matriz B: ");
    scanf("%d", &colunaB);

    matA = malloc(linhaA*sizeof(int*));
    matA[0] = malloc(colunaA*linhaA*sizeof(int));
    for(i = 1; i < linhaA; i++) {
        matA[i] = matA[i-1] + colunaA;
    }

    matB = malloc(linhaB*sizeof(int*));
    matB[0] = malloc(colunaB*linhaB*sizeof(int));
    for(j = 1; j < linhaB; j++) {
        matB[j] = matB[j-1] + colunaB;
    }

    matC = malloc(linhaA*sizeof(int*));
    matC[0] = malloc(colunaB*linhaA*sizeof(int));
    for(k = 1; k < linhaA; k++) {
        matC[k] = matC[k-1] + colunaB;
    }

    printf("\nMatriz A\n");
    for(i = 0; i < linhaA; i++){
        for(j = 0; j < colunaA; j++){
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\nMatriz B\n");
    for(i = 0; i < linhaB; i++){
        for(j = 0; j < colunaB; j++){
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%d", &matB[i][j]);
        }
    }
    printf("\n------------------Matrizes------------------\n\n");
    printf("------------------Matriz A------------------\n");
    for(i = 0; i < linhaA; i++){
        for(j = 0; j < colunaA; j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------Matriz B------------------\n");
    for(i = 0; i < linhaB; i++){
        for(j = 0; j < colunaB; j++){
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    multMatriz(matA, matB, matC, linhaA, colunaA, colunaB);

    printf("\n------------------Matriz C------------------\n");
    for(i = 0; i < linhaA; i++){
        for(j = 0; j < colunaB; j++){
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    free(matA[0]);
    free(matA);

    free(matB[0]);
    free(matB);

    free(matC[0]);
    free(matC);

    return 0;
}
