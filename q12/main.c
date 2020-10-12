#include <stdio.h>

int areaRetangulo (int a, int b){
    return a*b;
}

int main()
{
    int (*pf)(int, int) = areaRetangulo;
    printf("area do retangulo = %d\n", pf(2,3));
    return 0;
}


/* Respostas:
O ponteiro para uma função é utilizado quando queremos utilizar o endereço de uma função para realizar determinados comandos.
*/
