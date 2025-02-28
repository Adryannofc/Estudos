#include <stdio.h>

int main(){
    int vNum1, vNum2, vSoma, vDobro;
    printf("Digite um Numero: ");
    scanf("%d", &vNum1);

    printf("\nDigite um Segunda Numero: ");
    scanf("%d", &vNum2);

    vSoma = vNum1 + vNum2;
    printf("\nA soma de %d e %d = %d\n", vNum1, vNum2, vSoma);

    vDobro = vSoma * 2;
    printf("\nO dobro de %d = %d\n", vSoma, vDobro);

    return 0;
}