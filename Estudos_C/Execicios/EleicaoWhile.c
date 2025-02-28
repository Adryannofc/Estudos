#include <stdio.h>

int main(){

int vNum1 =0, vNum2 = 0, vNum3 = 0, vBranco = 0, vNulo = 0, vVoto = 0;
int empate = 1;

while (empate)
{
int vNum1 = 0, vNum2 = 0, vNum3 = 0, vBranco = 0, vNulo = 0, vVoto = 0;
    
for (int i = 6; i >= 1; i--){
  
    printf("***************\n");
    printf("Digite seu voto\n");
    printf("***************\n\n");

    printf("- Digite 0 para Branco\n");
    printf("- Digite 1 para o Candidato 1\n");
    printf("- Digite 2 para o Candidato 2\n");
    printf("- Digite 3 para o Candidato 3\n");
    printf("- Digite 4 para Nulo\n\n");

    printf("Falta %d votos totais:\n ", i);
    scanf("%d", &vVoto);

    if (vVoto == 0){
        vBranco++;
    } else if(vVoto == 1){
        vNum1++;
    } else if(vVoto == 2){
        vNum2++;
    } else if(vVoto == 3){
        vNum3++;
    } else if(vVoto == 4){
        vNulo++;
    }
    system("cls");
}
    
    if (vNum1 > vNum2 && vNum1 > vNum3){
        printf("Candidato 1 venceu com %d votos", vNum1);
            empate = 0;
    } else if(vNum2 > vNum1 && vNum2 > vNum3) {
        printf("Candidato 2 venceu com %d votos", vNum2);
            empate = 0;
    } else if(vNum3 > vNum1 && vNum3 > vNum2){
        printf("Candidato 3 venceu com %d votos", vNum3);
            empate = 0;   
    } else if(vNum1 == vNum2 && vNum1 > vNum3){
        printf("candidato 1 e Candidato 2. EMPATARAM\n\n");
            empate = 1;
    } else if(vNum1 == vNum3 && vNum1 > vNum2){
        printf("Candidato 1 e Candidato 3. EMPATRAM\n\n");
            empate = 1;
    } else if(vNum2 == vNum3 && vNum2 > vNum1){
        printf("Candidato 2 e Candidato 3. EMPATARAM\n\n");
            empate = 1;
    } else {
        printf("*************\n");
        printf("SEGUNDO TURNO\n");
        printf("*************\n\n");
            empate = 1;
    }
}
   return 0;
}