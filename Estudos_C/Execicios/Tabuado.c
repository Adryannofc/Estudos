#include <stdio.h>

int main(){
    int vNum1, vValor;
    printf("Digite um Numero: ");
    scanf("%d", &vNum1);
     
    for(int i = 1; i <= 10; i++){
        vValor = vNum1 * i;
        printf("%d x %d = %d\n", vNum1, i, vValor);
    }
}