#include<stdio.h>

int main (){
int chute = 0;
int numerosecreto = 42;
int acertou = chute == numerosecreto;
printf("%d", &acertou);
if(acertou) {
    printf("Parabéns! Você acertou!\n");
} else {
    if(chute > numerosecreto) {
        printf("Seu chute foi maior do que o número secreto!\n");
    } 
    if(chute < numerosecreto) {
        printf("Seu chute foi menor do que o número secreto!\n");
    }
}
}