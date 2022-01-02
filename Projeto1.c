#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){


    printf("==========================================\n");
    printf("= Bem vindo ao nosso jogo de adivinhacao =\n");
    printf("==========================================\n");

    int segundos = time(0);
    srand(segundos);

    int numerosecreto = rand() % 100;
    
    int chute;
    int tentativas = 1; 
    
    double pontos = 1000;

    while(1){

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
        
            continue;
        }


        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        

        if(acertou){
            printf("Parabéns você acertou!\n");

            break;
        }
        else {

            
            if(maior){
                printf("Seu chute foi maior que o Número secreto!\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
            
        }
        tentativas = tentativas + 1;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;

    }
    printf("Você acertou em %d tentativas\n", tentativas);
    printf("Fim de jogo!\n");
    printf("Total de pontos: %.1f\n", pontos);
    printf("\n\n");
}
