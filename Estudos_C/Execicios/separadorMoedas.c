#include <stdio.h>

int main (){
    int valor = 0;
    int NMoedas = 0;

    printf("Digite um valor em centavos");
    scanf("%d", &valor);
    if(valor < 0){
        printf("valor invalido");
    } else {
        NMoedas = valor / 100;

        if(NMoedas > 0){
            printf("%d moedas de 1 Real\n",NMoedas);
            valor -=  NMoedas * 100;
        }
        
        NMoedas = valor / 50;
        if(NMoedas > 0){
            printf("%d moedas de 50 centavos\n",NMoedas);
            valor -= NMoedas * 50;
        }

        NMoedas = valor / 25;
        if(NMoedas > 0){
            printf("%d moedas de 25 centavos\n", NMoedas);
            valor -= NMoedas * 25;
        }

        NMoedas = valor / 10;
        if(NMoedas > 0) {
            printf("%d moedas de 10 centavos\n", NMoedas);
            valor -= NMoedas * 10;
        }

        NMoedas = valor / 5;
        if(NMoedas > 0) {
            printf("%d moedas de 5 centavos\n", NMoedas);
            valor -= NMoedas * 5;
        }

        NMoedas = valor / 1;
        if(NMoedas > 0) {
            printf("%d moedas de 1 centavo\n", NMoedas);
        }
    }
    return 0;
}