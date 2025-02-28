#include <stdio.h>

int main(){

int nota1, nota2;
float media;

printf("Digite a primeira nota: ");
scanf("%d", &nota1);

printf("\nDigite a segunda Nota: ");
scanf("%f", &nota2);

if(media > (nota1 + nota2) / 2) {
    printf("\nVoce foi aprovado");
} else {
    printf("\nVoce foi reprovado");
}

    return 0;
}