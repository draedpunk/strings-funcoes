// Crie uma função que verifica se uma palavra é um palíndromo
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30], invertida[30];
    
    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    int tam_palavra;
    tam_palavra = strlen(palavra);

    strcpy(invertida,palavra);

    for (int i = 0; i < tam_palavra / 2; i++) {
        char temp = invertida[i];
        invertida[i] = invertida[tam_palavra - 1 - i];
        invertida[tam_palavra - 1 - i] = temp;
    }
    
    if (strcmp(palavra, invertida) == 0){
        printf("Ehh um palindromo");
    } else{
        printf("Nao eh um palindromo.");
    }

    return 0;
}