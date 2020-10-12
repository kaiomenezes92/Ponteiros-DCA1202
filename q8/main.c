#include <stdio.h>

int main()
{
    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }

    return 0;
}


/* Respostas:
Primeiro - > Esse programa cria um vetor, atribui um valor a três posições e mostra o conteudo do vet em um for.
Segundo - > Esse programa cria um vetor, atribui um valor a três posições e mostra o endereço hexadecimal
de cada posição vet em um for.
*/
