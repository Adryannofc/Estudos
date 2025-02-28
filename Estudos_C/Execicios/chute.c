#include <stdio.h>

int main()
{
    printf("Tabela de salario\n");
    char nome[11];
    printf("Digite seu nome\n");
    gets(nome);
    
    float salario;
    float aumento;
    
    printf("Qual é seu salário atual?\n");
    scanf("%d", &salario);
    
    if (salario < 500){
        salario *= 1.2;
        
    } else {
        salario *= 1.1;
        
        
        printf("Voce teve um aumento de 10%% referente ao seu salario, atualizando para %d", salario);
    }
    getch();
    return 0;
}