#include <stdio.h>
// Desafio mario
// Usuario informa um numero
// esse numero vai receber uma coluna de #
// enquanto n# > 1; n--
/*
saida:

#
##
###
####
#####
######

*/
int main()
{
    int n;

    do {
    printf("Digite um numero: ");
    scanf("%d", &n);
    } while(n < 1 || n > 8);
    

    for(int i = 0; i < n; i++){ // linhas
       for(int j = 0; j < n; j++){ // colunas
        if( n - i - 2 < j){
            printf("#");
        } else {
            printf(" ");
        }
        
       }
       printf("\n");
    }
    
    
    

    return 0;
}