#include <stdio.h>

int vSelecOpcao;




void fMenu(){
   
    printf("Digite 1 para Somar: ");
    printf("\nOpcao:  ");
    scanf("%d\n", &vSelecOpcao);

    switch (vSelecOpcao)
    {
    case 1: fSoma();
        break;
    
    default:
        break;
    }
}

void fSoma(){
    system("cls");
    printf("***********\n");
    printf("---SOMA---\n");
    printf("***********\n");
}


int main(){
    
    fMenu();

    return 0;
}