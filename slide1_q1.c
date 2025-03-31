// Fazer um programa que leia uma lista de N nomes de pessoas de até
// 10 caracteres e imprima esta mesma lista de nomes todos em letras
// maiúsculas usando a biblioteca ctype.h.
#include <stdio.h>
#include <ctype.h>

int main (){
    char nomes[4][25];
    for (int i = 0; i < 4; i++){
        scanf("%s", nomes[i]); // pega os nomes e bota na matriz
    }

    printf("Nomes maiusculos:\n\n");
    // transforma os nomes em maiusculo c o toupper()
    for (int i = 0; i < 4; i++){
        for (int j = 0; nomes[i][j] != '\0'; j++){
            nomes[i][j] = toupper(nomes[i][j]);
        }
    }
    // printa os resultados
    for (int i = 0; i < 4; i++){
        printf("%s\n", nomes[i]);
    }

    return 0;
}