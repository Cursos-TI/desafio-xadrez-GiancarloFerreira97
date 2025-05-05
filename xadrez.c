#include <stdio.h>

//Desafio Xadrez - Nível Mestre

//Bispo: 5 Casas Diagonal (direita,cima)
void BispoAcao(){ 
    for (int i = 0; i < 5; i++){
        printf("Direita, "); 
        for (int j = 0; j < 1; j++) {
        printf("Cima.\n");
        }
    }
}

//Torre: 5 Casas Direita
void TorreAcao(int casas){
    if (casas > 0) {
        printf("Direita.\n");
        TorreAcao(casas - 1);
    }
}

//Rainha: 8 Casas Esquerda
void RainhaAcao(int casas){
    if (casas > 0) {
        printf("Esquerda.\n");
        RainhaAcao(casas - 1);
    }
}

//Continue e Break / Cavalo: 2 cima, 1 direita (Cima, Cima, Direita)
void CavaloAcao(){ 
    int direita = 0;
    int cima = 0;

    for (int i = 0; i < 3; i++)
    {
        if (cima < 2){
            printf("Cima.\n");
            cima++;
            continue;
        }

        if (direita < 1){
            printf("Direita.\n");
            direita++;
        }

        if (direita == 1 && cima == 2)
        break;
    }
    
}



int main(){
    printf("Movimento da Torre: \n");
    TorreAcao(5);

    printf("\nMovimento da Rainha: \n");
    RainhaAcao(8);

    printf("\nMovimento do Bispo: \n");
    BispoAcao(0);

    printf("\nMovimento do Cavalo: \n");
    CavaloAcao(0);

    return 0;
}
