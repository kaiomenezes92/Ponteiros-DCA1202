#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define vMAX 100000

typedef void funcao(float *vet, int t);

void ordena (float *vet, int tam){
    int i, j;
    float aux;

    for(i = 0; i < tam; i++){
        for(j = i+1; j < tam; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

}

int main(){

    clock_t tempo;
    tempo = clock();

    srand(time(NULL));

    funcao *pf;
    float *vet;

    pf = ordena;

    vet = malloc(vMAX*sizeof(float));

    for(int i = 0; i < vMAX; i++){
        vet[i] = rand() % 10 + 1;
    }

    /*
    printf("--------------Elementos do vetor ordenados--------------\n");

    for(int i = 0; i < tam; i++){
        printf("%.2f ", vet[i]);
    }
    */

    (*pf) (vet, vMAX);

    free(vet);

    printf("Tempo:%f\n",(clock() - tempo) / (double)CLOCKS_PER_SEC);
}

/* Respostas:
Na função criada por mim a execução do programa leva 21.9 segundos.
*/
