#include <stdio.h>

int main(){
    int vNum1, vNum2, vNum3;
    float vMedia;

    printf("\nDigite um Numero: ");
    scanf("%d", &vNum1);

    printf("\nDigite um Segunda Numero: ");
    scanf("%d", &vNum2);

    printf("\nDigite um Terceiro Numero: ");
    scanf("%d", &vNum3);

    vMedia = (vNum1 + vNum2 + vNum3) / 3.00;
    printf("\nA Media entre %d, %d, e %d = %.2f", vNum1, vNum2, vNum3, vMedia);
}