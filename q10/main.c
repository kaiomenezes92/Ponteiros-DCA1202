#include <stdio.h>

int main()
{
    int x[4];
    x[0] = 4092;
    int i;
    int chara = 1;
    int inte = 4;
    int floater = 4;
    int doubled = 8;

    printf("------------Tipo Char------------\n");
    for(i=0;i<4;i++) {
        printf("%d ", x[i]);
        x[i+1] = x[i] + chara;
    }
    printf("\n\n");

    printf("------------Tipo Int------------\n");
    for(i=0;i<4;i++) {
        printf("%d ", x[i]);
        x[i+1] = x[i] + inte;
    }
    printf("\n\n");

    printf("------------Tipo Float------------\n");
    for(i=0;i<4;i++) {
        printf("%d ", x[i]);
        x[i+1] = x[i] + floater;
    }
    printf("\n\n");

    printf("------------Tipo Double------------\n");
    for(i=0;i<4;i++) {
        printf("%d ", x[i]);
        x[i+1] = x[i] + doubled;
    }
    printf("\n\n");

    return 0;
}
