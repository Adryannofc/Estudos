#include <stdio.h>

int main(){

    int vNum1;
    printf("Digite um Numero: ");
    scanf("%d", &vNum1);

    if(vNum1 >= 0){
        printf("\n%d e Positivo", vNum1);
    } else {
        printf("\n%d e Negativo", vNum1);
    }

}