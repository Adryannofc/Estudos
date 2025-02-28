#include <stdio.h>

int main(){
    int vAltura, vLinha, vColuna, vEspaco;

    do{
        printf("Digite um Numero 1 a 8: ");
        scanf("%d", &vAltura);
    } while (vAltura < 1 || vAltura > 8); // Menor que 1 ou Maior que 8. Digite Novamente

    for(vLinha = 0; vLinha < vAltura; vLinha++){ // vLinha(0) < vAlura(4) SIM
        for(vEspaco = 0; vEspaco < (vAltura - vLinha - 1); vEspaco++){ // vEspaco(0) < {vAltura(4) - vLinha(0) - 1}
            printf(" "); // preenche 3 espacos em branco
        }
        for(vColuna = 0; vColuna <= vLinha; vColuna++){
            printf("*"); // vColuna(0) <= vLinha(0) SIM
        }
        printf(" "); // Espaco entre um Escada e Outra
        for(vColuna = 0; vColuna <= vLinha; vColuna++){ // vColuna(0) <= vLinha(0) SIM
            printf("*");
        }
        printf("\n");
    }
}