#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    pf = aloha;

    return 0;
}


/* Respostas:
aloha[2] = value; - > Válido!
scanf("%f", &aloha); - > Válido!
aloha = value"; - > Inválido!
printf("%f", aloha); - > Válido!
coisas[4][4] = aloha[3]; - > Válido!
coisas[5] = aloha; - > Inválido!
pf = value; - > Inválido!
pf = aloha; - > Válido!
*/
