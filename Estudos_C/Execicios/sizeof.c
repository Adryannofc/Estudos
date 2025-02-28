#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("*****************************\n");
    printf("Quantidade de Memoria Alocada\n");
    printf("*****************************\n\n");

    float vTeste;
    printf("- char........%d bytes\n", sizeof(char));
    printf("- short.......%d bytes\n", sizeof(short));
    printf("- int.........%d bytes\n", sizeof(int));
    printf("- long........%d bytes\n", sizeof(long));
    printf("- float.......%d bytes\n", sizeof(float));
    printf("- double......%d bytes\n", sizeof(double));
    printf("- long double.%d bytes\n", sizeof(long double));
    printf("- vTeste......%d bytes\n",sizeof(vTeste));

    return 0;
}