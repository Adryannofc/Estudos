#include <stdio.h>

int main(){
int vNum1, vNum2, vSoma;

printf("Digite um Numero\n");
scanf("%d", &vNum1);
printf("Digite um segundo Numero\n");
scanf("%d", &vNum2);

vSoma = vNum1 + vNum2;

printf("%d + %d = %d", vNum1, vNum2, vSoma);

}