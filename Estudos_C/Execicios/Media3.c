#include <stdio.h>

int main(){
    float vNota1, vNota2, vNota3;
    float vMedia;

    printf("Digite sua primeira Nota: ");
    scanf("%f", &vNota1);
    printf("\nDigite sua segunda Nota: ");
    scanf("%f", &vNota2);
    printf("\nDigite sua Terceira Nota: ");
    scanf("%f", &vNota3);
    
    vMedia = (vNota1 + vNota2 + vNota3) / 3;

    printf("Sua media e %.2f", vMedia);

}