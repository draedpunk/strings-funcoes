// Defina uma função que ordena todos os elementos de um vetor
#include <stdio.h>

void ordenar(int vetor[]){
    int temp;

    if (vetor[0] > vetor[1]){
        temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }
    if (vetor[0] > vetor[2]){
        temp = vetor[0];
        vetor[0] = vetor[2];
        vetor[2] = temp;
    }
    if (vetor[1] > vetor[2]){
        temp = vetor[1];
        vetor[1] = vetor[2];
        vetor[2] = temp;
    }
    printf("Ordenados: %d %d %d", vetor[0], vetor[1], vetor[2]);

}

int main(){
    int vetor[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor);

    return 0;
}