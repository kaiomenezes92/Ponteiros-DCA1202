#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    mat[0] = 4;
    x = (*mat)++;

    printf("teste: %d\n", mat[0]);

    printf("teste: %d\n", x);
    printf("teste: %d\n", mat[0]);

    return 0;
}


/* Respostas:
p = mat + 1; - > Correto, pois o ponteiro p recebe o endereço de memória mat+1, ou seja, mat[0] + 1.
p = mat++; - > Errado, dá erro de incremento do vetor.
p = ++mat; - > Errado, dá erro de incremento do vetor.
x = (*mat)++; -> Correto, é uma expressão válida que irá incrementar o valor 1 ao conteudo da primeira posição do mat.
*/
