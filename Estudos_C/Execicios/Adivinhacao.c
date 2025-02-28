#include <stdio.h> 

int main(){
    int chute;
    int secreto = 56;
    printf("****************************\n");
    printf("Escolha um numero de 1 a 100\n");
    printf("****************************\n\n");
    scanf("%d", chute);
    
do {
    if(chute > 1 && chute < 100){
        if(chute == secreto){
            printf("Parabens! Voce acertou o numero secreto:%d\n", secreto);
        } else if(chute > secreto){
            printf("O numero secreto é menor que %d\n", chute);
        } else if(chute < secreto){
            printf("O numero secreto é maior que %d\n", chute);
        }
    }
} while(chute != secreto);
    return 0;
}