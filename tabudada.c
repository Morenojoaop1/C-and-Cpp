#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;
    int tabuada;
    printf("Digite o numero inteiro que deseja fazer a tabuada: ");
    scanf("%d", &numero);

    for(int i=1; i<11; i++){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
    }
}

