#include <stdio.h>

void soma(int vetor1[], int vetor2[], int vetorRes[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){
        vetorRes[i] = vetor1[i] + vetor2[i];
    }
}

int main()
{
    int tamanho , i;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int vetor1[tamanho], vetor2[tamanho], vetorRes[tamanho];

    printf("Digite os elementos do vetor 1\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor 2\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor2[i]);
    }

    soma(vetor1, vetor2, vetorRes, tamanho);

    printf("O vetor resultante eh: ");
    for(i = 0; i < tamanho; i++){
        printf("%d ", vetorRes[i]);
    }

    printf("\n");

    return 0;
}
