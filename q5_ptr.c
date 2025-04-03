// letters frequency
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void calcular_freq(char stringui[]) {
    char letra;
    int letras[26] = {0};
    int maior_f = 0;
    
    for (int p = 0; stringui[p] != '\0';p++) {
        if (isalpha(stringui[p])) {
            letra = tolower(stringui[p]);
            letras[letra -'a']++;
        }
    }
        
    for (int t = 0; t < 26; t++) {
        if (letras[t] > maior_f) {
            maior_f= letras[t];
        }
    }

    for (int t = 0; t < 26; t++) {
        if (letras[t]== maior_f) {
            printf("%c", t + 'a');
        }
    }
}

int main() {
    int casos;
    char frase[201];

    scanf("%d", &casos);
    getchar();

    for (int i = 0; i < casos; i++) {
        fgets(frase, sizeof(frase), stdin);
        
        calcular_freq(frase);
        printf("\n");
    }

    return 0;
}