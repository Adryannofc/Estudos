#include <stdio.h>

int main(){
    int vNum1, vRes = 1;
    printf("Digite um Numero: ");
    scanf("%d", &vNum1);
    
    for (int i = vNum1; i >= 1 ; i--){   
        vRes = vRes * i;
    }
    printf("O fatorial de %d e %d",vNum1, vRes);

    return 0;
}