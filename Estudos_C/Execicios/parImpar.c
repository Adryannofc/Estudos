#include <stdio.h>

int main()
{ 
    int num;
    int resto;

    printf("Digite um Numero");
    scanf("%d", num);
    resto = num % 2;

    if (resto = 0){
        printf("%d é um numero PAR", num);
    } else {
        printf("%d é um numero IMPAR", num);
    }

    return 0;
}