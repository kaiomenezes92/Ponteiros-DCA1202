#include <stdio.h>
#include <stdlib.h>

//função padrão do qsort
int compara (const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    //criando um novo ponteiro do vetor e o inteiro tamanho
    float *vet;
    int tam;

    //perguntando ao usuario o tamanho do vetor
    printf("Digite o tamanho do vetor\n");
    scanf("%i", &tam);

    //alocando o vetor na memoria
    vet = malloc(tam*sizeof(float));

    //pedindo os elementos do vetor
    printf("Digite os elementos do vetor\n");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet[i]);
    }

    //utilizando a função qsort, passando nos parametros(vetor, tamanho do vetor, tamanho do tipo do vetor, função compara)
    qsort(vet, tam, sizeof(float), compara);

    //ordenação do vetor
    printf("--------------Elementos do vetor ordenados--------------\n");

    for(int i = 0; i < tam; i++){
        printf("%.2f ", vet[i]);
    }

    printf("\n");

    //liberação da memória
    free(vet);

    return 0;
}
