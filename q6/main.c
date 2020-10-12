#include <stdio.h>

int main()
{
    int pulo[3];

    pulo[0] = 5;
    pulo[1] = 4;
    pulo[2] = 3;

    printf("pulo[2] = %d\n", *(pulo + 2));

}

/* Respostas:
*(pulo + 2) - > Correto!
*(pulo + 4) - > Errado!
pulo + 4 - > Errado!
pulo + 2; - > Errado!
*/
