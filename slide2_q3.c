// Defina uma função que busca e retorna o menor elemento de um
// vetor
#include <stdio.h>

int achar_menor_valor(int v[]){
    int menor_valor;
    menor_valor = v[0];

    for (int i = 1; i < 5; i++){
        if (v[i] < menor_valor){
            menor_valor = v[i];
        }
    }
    printf("O menor valor de um vetor eh: %d", menor_valor);
}

int main(){
    int vetor[5] = {25, 50, 75, 5, 15};

    achar_menor_valor(vetor);
    return 0;
}