#include <stdio.h>
#include <stdlib.h>


int main(){
    char nome[51];
    int vVerificao = 0;

   while (vVerificao == 0){
    printf("Digite seu Nome e Sobrenome: ");
    fgets(nome, 51 ,stdin);
    system("cls");

    printf("%sEsta correto?", nome);
    printf("\n- 0 para Digitar Novamente\n");
    printf("- 1 Para Prosseguir\n");
    scanf("%d", &vVerificao);
   }
    printf("Ola %s", nome);
    
    
   return 0;
}