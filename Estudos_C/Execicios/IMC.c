#include <stdio.h>

int main(){
    float vIMC = 0, vPeso, vAltura;
    printf("Digite sua Altura: ");
    scanf("%f", &vAltura);
    printf("\nDigite seu Peso: ");
    scanf("%f", &vPeso);

    vIMC = vPeso / (vAltura * vAltura);

    if(vIMC < 18.5) {
        printf("\n- Magreza EXTREMA FIOTE - IMC %.2f", vIMC);
    } else if(vIMC > 18.5 && vIMC < 24.9){
        printf("\n- Suficiente - IMC  %.2f", vIMC);
    } else if(vIMC > 25 && vIMC < 29.9){
        printf("\n- Sobrepeso - IMC  %.2f", vIMC);
    } else if(vIMC > 30 && vIMC < 39.9){
        printf("\n- Obesidade - IMC  %.2f", vIMC);
    } else {
        printf("\n- KILOS MORTAIS - IMC  %.2f", vIMC);
    }
}