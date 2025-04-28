#include <stdio.h> 

int main (){
//Xadrez - Desafio Nível Novato
//Torre, Bispo e Rainha
//For, While, Do-While

//Torre = 5 casas para a direita
//Bispo = 5 casas na diagonal para cima e à direita (Cima,Direita)
//Rainha = 8 casas para a esquerda

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
    int RainhaAcao = 8; //futuro
    int CasaRainha = 0; //atual

    printf("\nMovimento da Rainha: \n");

    do {
        printf("Esquerda.\n"); //repetição
        CasaRainha++; //incrementação
    } while (CasaRainha < RainhaAcao); //condição


    return 0;
}