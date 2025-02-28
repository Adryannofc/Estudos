 #include <stdio.h> 

 void Menu(){
    
    printf("***************\n");
    printf("URNA ELETRONICA\n");
    printf("***************\n\n");

    printf("- Digite 1 para votar no Candidato Pedro\n");
    printf("- Digite 2 para votar no Candidato Mario\n");
    printf("- Digite 3 para votar no Candidato Lucas\n");
    printf("- Digite 4 para votar em Branco\n");
    printf("- Digite 5 para votar Nulo\n\n");
}

void Votacao(){
    
}
 int main()
 {
    int cand1 = 0, cand2 = 0, cand3 = 0, branco = 0, nulo = 0, voto = 0, cedulas = 0;
    
    while (cedulas <= 9){
        Menu();
        printf("\nFaltam %d cedulas para o fim da votacao.\n", 10 - cedulas);
        printf("\nDigite seu voto: ");
        scanf("%d", &voto);
        system("cls");
        
        switch (voto){

            case 1: cand1++;
            break;

            case 2: cand2++;
            break;

            case 3: cand3++;
            break;

            case 4: branco++;
            break;

            case 5: nulo++;
            break;
            
            default: printf("Voto invalido.\n");

        }
        cedulas++;
    }

    if (cand1 > cand2 && cand1 > cand3){
        printf("******************************************\n");
        printf("Pedro venceu a eleicao com %d votos.\n", cand1);
        printf("******************************************\n");
        if (cand2 > cand3){ 
            printf("\n- Mario ficou em segundo lugar com %d votos.\n", cand2);  
        } else {
            printf("\n- Lucas ficou em segundo lugar com %d votos.\n", cand3);
        }

    } else if (cand2 > cand1 && cand2 > cand3){
        printf("******************************************\n");
        printf("Mario venceu a eleicao com %d votos.\n", cand2);
        printf("******************************************\n");
        if(cand1 > cand3){
            printf("\n- Pedro ficou em segundo lugar com %d votos.\n", cand1);
        } else {
            printf("\n- Lucas ficou em segundo lugar com %d votos.\n", cand3);
        }

    } else if (cand3 > cand1 && cand3 > cand2) {
        printf("******************************************\n");
        printf("Lucas venceu a eleicao com %d votos.\n", cand3);
        printf("******************************************\n");
        if(cand1 > cand2){
            printf("\n- Pedro ficou em segundo lugar com %d votos.\n", cand1);
        } else {
            printf("\n- Mario ficou em segundo lugar com %d votos.\n", cand2);
        }

    } else {
        printf("Eleicao foi para o segundo turno.\n");
    }

    return 0;
 }
