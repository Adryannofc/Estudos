#include <stdio.h>

int main(){
    
    int vDias, vAnos, vDiasFaltando;

    printf("Digite um Numero de Dias: ");
    scanf("%d", &vDias);

    vAnos = vDias / 365;
    vDiasFaltando = vDias % 365;

    printf("\n%d dias Corresponde a %d anos e %d dias\n", vDias, vAnos, vDiasFaltando);
    return 0;
}