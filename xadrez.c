#include <stdio.h> 


int main (){
//Xadrez - Desafio Nível Aventureiro
//Torre, Bispo, Rainha e cavalo
//For, While, Do-While & Loop Aninhado

//Torre = 5 casas para a direita
//Bispo = 5 casas na diagonal para cima e à direita (Cima,Direita)
//Rainha = 8 casas para a esquerda
//Cavalo = 2 casas para baixo e 1 casa para a esquerda

//For
    int TorreAcao = 5; //Definição da variável para o movimento e número de casas movimentadas
    int i;

    printf("Movimento da Torre: \n");
    // for (inicialização; condição; incrementação)
    for (i = 0; i < TorreAcao; i++)
    {
        printf("Direita.\n");
    }

//While
    int BispoAcao = 5; //futuro
    int CasaBispo = 0; //atual

    printf("\nMovimento do Bispo: \n");
    //While (condição-falsa)
    while (CasaBispo < BispoAcao) 
    {
        printf("Direita, Cima.\n");
        CasaBispo++; //incrementação
    }
    

//Do-While
    printf("\nMovimento da Rainha: \n");
    int RainhaAcao = 8; //futuro
    int CasaRainha = 0; //atual 

    do {
        printf("Esquerda.\n"); //repetição
        CasaRainha++; //incrementação
    } while (CasaRainha < RainhaAcao); //condição


//Loop Aninhado (For & While)
    printf("\nMovimento do Cavalo: \n");
    int CavaloAcao1 = 2; //Baixo
    int CavaloAcao2 = 1; //Esquerda


    for (i = 0; i < CavaloAcao2; i++)
    {
        while (i < CavaloAcao1)
        {
            i++;
            printf("Baixo.\n");
        }
        
        printf("Esquerda.\n");
    }

    
    return 0;
}
