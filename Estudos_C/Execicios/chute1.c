#include <stdio.h>

int main(){
    int vSecreto = 53, vNum = 0;



    // essa porra faz isso
   

while(vNum != vSecreto){
    printf("Digite um Numero de 0 a 100: ");
    scanf("%d", &vNum);
    printf("\n");
    
    if(vNum == vSecreto){
        printf("Voce acertou! O numero secreto e %d\n\n", vSecreto);
    } else if (vNum > vSecreto){
        printf("Numero Secreto e Menor que %d\n\n", vNum);
    } else if(vNum < vSecreto){
        printf("Numero Secreto e Maior que %d\n\n", vNum);
    }
}
   
 
        
  
   
    return 0;
}