#include <stdio.h>

int main(){
    float vNum, vDiv;

    printf("Digite um Numero: ");
    scanf("%f", &vNum);

    vDiv = vNum / 3;
    printf("\nA terca parte de %.1f = %.1f", vNum, vDiv);
}