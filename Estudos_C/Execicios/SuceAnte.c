#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vNumb, vSucessor, vAntecessor;

    printf("Digite um Numero: ");
    scanf("%d", &vNumb);
    vSucessor = vNumb + 1;
    printf("O Sucessor e: %d\n", vSucessor);
    vAntecessor = vNumb - 1;
    printf("O Antecessor e: %d\n", vAntecessor);
    
}