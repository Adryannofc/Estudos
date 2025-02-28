#include <stdio.h>

int main(){
    float vNum, vDiv;

    printf("Digite um Numero: ");
    scanf("%f", &vNum);

    vDiv = vNum / 3.0;

    printf("A terca parte de %.2f e %.2f", vNum, vDiv);
}