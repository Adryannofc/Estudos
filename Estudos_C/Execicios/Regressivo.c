#include <stdio.h>

int main(){
int vNum = 0;
printf("Digite um Numero: ");
scanf("%d", &vNum);
while(vNum >= 1){
    printf("%d\n", vNum);
    vNum--;
}
    return 0;
}