#include <stdio.h>
#include <locale.h>
#include <windows.h>


int vNum1, vNum2, vRes, vSelecao;
float vDivisao1, vDivisao2, vDiv;

void fSoma(){
    system ("cls");
    printf("*************************************************\n");
    printf("--------------------- SOMA ----------------------\n");
    printf("*************************************************\n\n");

    printf("- Digite um Numero: ");
    scanf("%d", &vNum1);

    printf("\n");

    printf("- Digite outro Numero: ");
    scanf("%d", &vNum2);

    vRes = vNum1 + vNum2;  
    printf("\n- Resultado: %d + %d = %d\n", vNum1, vNum2, vRes);
    getchar();
    printf("\nPressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();
}

void fSubtracao(){
    system("cls");
    printf("*************************************************\n");
    printf("------------------- SUBTRACAO -------------------\n");
    printf("*************************************************\n\n");

    printf("- Digite um Numero: ");
    scanf("%d", &vNum1);

    printf("\n");

    printf("- Digite outro Numero: ");
    scanf("%d", &vNum2);

    vRes = vNum1 - vNum2;

    printf("\n- Resultado: %d - %d = %d\n", vNum1, vNum2, vRes);
    getchar();

    printf("\nPressione ENTER para voltar ao Menu: ");
    getchar();
    fMenu();
}
    
void fMultiplicacao(){
    system("cls");
    printf("*************************************************\n");
    printf("----------------- MULTIPLICACAO -----------------\n");
    printf("*************************************************\n\n");

    printf("- Digite um Numero: ");
    scanf("%d", &vNum1);

    printf("\n");

    printf("- Digite outro Numero: ");
    scanf("%d", &vNum2);

    vRes = vNum1 * vNum2;

    printf("\n- Resultado: %d x %d = %d\n", vNum1, vNum2, vRes);
    getchar();
    printf("\nPressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();
}

void fDivisao(){
    system("cls");
    Sleep(1000);
    printf("*************************************************\n");
    printf("-------------------- DIVISAO --------------------\n");
    printf("*************************************************\n\n");

    printf("- Digite um Numero: ");
    scanf("%f", &vDivisao1);

    printf("\n");

    printf("- Digite outro Numero: ");
    scanf("%f", &vDivisao2);

    vDiv = vDivisao1 / vDivisao2;

    printf("\n- Resultado: %.f / %.f = %.1f\n", vDivisao1, vDivisao2, vDiv);
    getchar();
    printf("\nPressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();
}

void fTabuada(){
    system("cls");
        printf("*************************************************\n");
        printf("-------------------- TABUADA --------------------\n");
        printf("*************************************************\n\n");

        printf("- Digite um Numero: ");
        scanf("%d", &vNum1);

        for(int i =  1; i <= 10; i++){
            vRes = vNum1 * i;
            printf("\n");
            printf("%d x %d = %d\n", vNum1, i, vRes);
        }
    getchar();
    printf("\n\n- Pressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();
}

void fMenu(){

    do {
        system("cls");
        printf("*************************************************\n");
        printf("------------------ CALCULADORA ------------------\n");
        printf("*************************************************\n\n");
    
        printf("- Digite [1] para Somar........(+)");
        printf("\n");
        printf("- Digite [2] para Subtrair.....(-)");
        printf("\n");
        printf("- Digite [3] para Multiplicar..(*)");
        printf("\n");
        printf("- Digite [4] para Dividir......(/)");
        printf("\n");
        printf("- Digite [5] para Tabuada......(x)");
        printf("\n\n");
        printf("- Digite [0] para Fechar o Programa (Exit)\n\n");
        printf("- Opcao: ");
        scanf("%d",&vSelecao);

    } while (vSelecao < 0 || vSelecao > 5);

    switch (vSelecao)
    {
        case 1: fSoma();
            break;
        case 2: fSubtracao();
            break; 
        case 3: fMultiplicacao();   
            break;
        case 4: fDivisao();
            break;
        case 5: fTabuada();
            break;
        case 0: fSair();
        
        default: ;
            break;
    }
}

void fSair(){
    system("cls");
    printf("************************************************************************************************************************\n");
    printf("----------------------------------------------------- GOODBYE ----------------------------------------------------------\n");
    printf("************************************************************************************************************************\n\n");
}

int main(){

    fMenu();

 return 0; 
} 