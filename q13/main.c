#include <stdio.h>

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

int main()
{
    float *vet;
    int tam;


    printf("Digite o tamanho do vetor\n");
    scanf("%i", &tam);
    vet = malloc(tam*sizeof(float));

    printf("Digite os elementos do vetor\n");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet[i]);
    }

    printf("\n");

    ordena(vet, tam);

    printf("--------------Elementos do vetor ordenados--------------\n");

    for(int i = 0; i < tam; i++){
        printf("%.2f ", vet[i]);
    }

    printf("\n");

    free(vet);

    return 0;
}
