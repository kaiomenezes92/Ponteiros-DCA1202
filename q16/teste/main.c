#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define vMAX 100000

int compara (const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main(){

    clock_t tempo;
    tempo = clock();

    srand(time(NULL));

    float *vet;
    int i;

    vet = malloc(vMAX*sizeof(float));

    for(i = 0; i < vMAX; i++){
        vet[i] = rand() % 10 + 1;
    }

    /*
    // código de teste
    for(i = 0; i < vMAX; ++i){
        printf("%.2f ", vet[i]);
    }
    //fim

    qsort(vet, vMAX, sizeof(float), compara);

    printf("\n");

    for(i = 0; i < vMAX; ++i){
        printf("%.2f ", vet[i]);
    }
    */

    qsort(vet, vMAX, sizeof(float), compara);

    free(vet);

    printf("Tempo:%f\n",(clock() - tempo) / (double)CLOCKS_PER_SEC);
}

/* Respostas:
Na função qsort a execução do programa leva 0.09 segundos.
*/
