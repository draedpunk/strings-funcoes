// Fazer um programa que leia uma lista de N nomes de até 10
// caracteres, calcule e imprima a quantidade de nomes masculinos,
// femininos e indefinidos, da seguinte forma:
// ○ Nome terminado com a letra ‘o’ - masculino;
// ○ Nome terminado com a letra ‘a’ - feminino;
// ○ Nomes terminados com outras letras - indefinido
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int qtd, fem = 0, masc = 0, indef = 0;
    printf("Informe a quantidade de nomes a serem analisados: ");
    scanf("%d", &qtd);

    char nomes[qtd][10];

    printf("Informe %d nomes abaixo:\n", qtd);
    for (int i= 0; i < qtd; i++){
        scanf("%s", nomes[i]);

        int posicao_ultima_letra = strlen(nomes[i]) - 1;
        char ultima_letra = nomes[i][posicao_ultima_letra];

        if (ultima_letra == 'a'){
            fem++;
        } else if (ultima_letra == 'o'){
            masc++;
        } else {
            indef++;
        }
    }
    printf("\n");
    printf("Quantidade de nomes femininos: %d\n", fem);
    printf("Quantidade de nomes masculinos: %d\n", masc);
    printf("Quantidade de nomes indefinidos: %d\n", indef);


    return 0;
}