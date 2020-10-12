#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("p : %x ", p);
    printf("\n");

    printf("*p+2 : %d ", *p+2);
    printf("\n");

    printf("**&p : %d ", **&p);
    printf("\n");

    printf("3**p : %d ", 3**p);
    printf("\n");

    printf("**&p+4 : %d ", **&p+4);
    printf("\n");

    return 0;
}

/* Respostas:
p : 61fe1c (Supondo 4094)
*p+2 : 7
**&p : 5
3**p : 15
**&p+4 : 9
*/
