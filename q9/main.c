#include <stdio.h>

int main()
{
    double x[4];
    int i;

    for(i=0;i<4;i++){
        printf("%d ", (x+i));
    }

    printf(" double .......: %d bytes\n", sizeof(double));


    return 0;
}


/* Respostas:
tipo char - > 4092, 4093, 4094, 4095.
tipo int - > 4092, 4096, 4100, 4104.
tipo float - > 4092, 4096, 4100, 4104.
tipo double - > 4092, 4100, 4108, 4116.
*/
