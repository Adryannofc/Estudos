#include <stdio.h>

int main(){
    int vX, vA, vB, vY;

    printf("Na Expressao y = ax + b\n\n");

    printf("- Digite o Valor de (a): ");
    scanf("%d", &vA);

    printf("\n- Digite o Valor de (x): ");
    scanf("%d", &vX);

    printf("\n- Digite o Valor de (b): ");
    scanf("%d", &vB);

    vY = vA * vX + vB;

    printf("\n%d = %d * %d + %d", vY, vA, vX, vB);
    return 0;
}