#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int vSelecOpcao, vPontuacao;

void fSair(){
    system("cls");
    printf("************************************************************************************************\n");
    printf("-------------------------------------------- GOODBYE --------------------------------------------\n");
    printf("*************************************************************************************************\n\n");
}

void fPontuacao(){
    system("cls");
    printf("***********************************************\n");
    printf("----------- PONTUACAO TOTAL (%d)Pts -----------\n", vPontuacao);
    printf("***********************************************\n\n");
    getchar();
    getchar();
    fMenu();
}

void fTemas(){
    system("cls");
    printf("********************************************\n");
    printf("------------- JANELA DE TEMAS --------------\n");
    printf("********************************************\n\n");
    printf("Digite [1] para Quiz HISTORIA DA COMPUTACAO\n");
    printf("Digite [2] para Quiz PROGRAMACAO\n");
    printf("Digite [3] para Quiz....\n");

    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);
    switch (vSelecOpcao)
    {
    case 1: fTemaHistoria();  
        break;
    case 2: fTemaProgramacao();
        break;
    case 4: ;
    default:
        break;
    }

}

void fTemaProgramacao(){
    system("cls");
    printf("******************************************\n");
    printf("------------- PROGRAMACAO QUIZ -----------\n");
    printf("******************************************\n\n");

    printf("01 - JavaScript e Java sao a mesma linguagem de programacao?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1) {
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    } else {
        vPontuacao++;
        printf("\nACERTOU! Pts(%d)\n\n", vPontuacao);
    }

    printf("02 - C# foi desenvolvido pela Microsoft como resposta ao Java?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nACERTOU! Pts(%d)\n\n", vPontuacao);
    } else {
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    }

    printf("03 - A linguagem Kotlin pode ser usada para desenvolvimento Android.\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nACERTOU! Pts(%d)\n\n", vPontuacao);
    } else {
        printf("\nERROU!Pts(%d)\n\n", vPontuacao);
    }

    printf("04 - COBOL foi criada para aplicacoes cientificas?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    } else {
        vPontuacao++;
        printf("\nACERTOU! Pts(%d)\n\n", vPontuacao);
    }

    printf("05 - Lua e uma linguagem de programacao desenvolvida no Brasil.\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nACERTOU!\n\n");
    } else {
        printf("\nERROU!\n\n");
    }
    printf("**************\n");
    printf("TOTAL: (%d)pts\n", vPontuacao);
    printf("**************\n");
    getchar();
    printf("Pressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();


}

void fTemaHistoria(){
    system("cls");
    printf("************************************************\n");
    printf("------------ HISTORIA DA COMPUTACAO ------------\n");
    printf("************************************************\n\n");

    printf("01 - Alan Turing e considerado um dos pais da computacao moderna?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);
    

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nPARABENS! Pts(%d)\n\n", vPontuacao);      
    } else {
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    }

    printf("02 - Linux foi criado por Bill Gates como alternativa ao Windows?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    } else {
        vPontuacao++;
        printf("\nPARABENS! Pts(%d)\n\n", vPontuacao);    
    }

    printf("03 -A primeira rede social da internet foi o Facebook?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    } else {
        vPontuacao++;
        printf("\nPARABENS! Pts(%d)\n\n", vPontuacao);    
    }

    printf("04 - A primeira versão do Microsoft Windows foi lançada em 1981?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    if(vSelecOpcao == 1){
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    } else {
        vPontuacao++;
        printf("\nPARABENS! Pts(%d)\n\n", vPontuacao);    
    }

    printf("05 - A Apple foi fundada antes da Microsoft?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);
    

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nPARABENS! Pts(%d)\n\n", vPontuacao);      
    } else {
        printf("\nERROU! Pts(%d)\n\n", vPontuacao);
    }

    printf("05 - O primeiro videogame comercial foi o Pong, lancado pela Atari?\n\n");
    printf("[1] VERDADEIRO\n");
    printf("[2] FALSO");
    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);
    

    if(vSelecOpcao == 1){
        vPontuacao++;
        printf("\nPARABENS! Pts\n\n");      
    } else {
        printf("\nERROU! Pts\n\n");
    }

    printf("**************\n");
    printf("TOTAL: (%d)pts\n", vPontuacao);
    printf("**************\n");
    getchar();
    printf("Pressione ENTER para Voltar ao Menu: ");
    getchar();
    fMenu();
}



void fLimpar(){
    system("cls");
    vPontuacao = 0;
    printf("*************************\n");
    printf("----PONTUACAO ZERADA-----\n");
    printf("*************************\n\n\n\n\n\n");
    fMenu();
}

void fMenu(){
    system("cls");
    printf("************************************\n");
    printf("------------ QUIZ CODES ------------\n");
    printf("************************************\n\n");
    printf("Digite [1] para Selecionar o Tema: \n");
    printf("Digite [2] para Visualizar Pontuacao: \n");
    printf("Digite [3] para Limpar Pontuacao: \n");
    printf("Digite [4] para Sair do Programa: \n");

    printf("\n\n- Opcao: ");
    scanf("%d", &vSelecOpcao);

    switch (vSelecOpcao)
    {
    case 1:fTemas();
        break;
    case 2:fPontuacao();
        break;
    case 3:fLimpar();
        break;
    case 4:fSair();
        break;
    default:
        break;
    }
}

int main (){

    fMenu();
    
    return 0;
}