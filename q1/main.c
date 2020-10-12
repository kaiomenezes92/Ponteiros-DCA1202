#include <stdio.h>

int main()
{   int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("p == &i : %d", p == &i);
    printf("\n");

    printf("*p - *q : %d", *p - *q);
    printf("\n");

    printf("**&p : %d", **&p);
    printf("\n");

    printf("3 - *p/(*q) + 7 : %d", 3 - *p/(*q) + 7);
    printf("\n");

    return 0;
}

/* Respostas:
p == &i : 1
*p - *q : -2
**&p = %d : 3
3 - *p/(*q) + 7 : 10
*/
