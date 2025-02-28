#include <stdio.h>

int main(){
    int vIdade;
    printf("Digite sua Idade: ");
    scanf("%d", &vIdade);

    if(vIdade < 18){
        printf("Voce e Menor de Idade");
    } else {
        printf("Voce e Maior de Idade");
    }

}