#include <stdio.h>
#include <string.h>

#define MAX 2000
#define max(a, b) ((a) > (b) ? (a) : (b))

int dp[MAX][MAX]; 
int posicoes_especiais[MAX]; 

void programacao_dinamica(char palavrao[], int tamanho_palavra) {
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < tamanho_palavra; i++) {
        dp[i][i] = 1;
    }

    for (int tam = 2; tam <= tamanho_palavra; tam++) {
        for (int i = 0; i <= tamanho_palavra - tam; i++) {
            int j = i + tam - 1;
            if (palavrao[i] == palavrao[j]) {
                dp[i][j] = (i + 1 <= j - 1) ? dp[i + 1][j - 1] + 2 : 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
}

int maior_subsequencia(int tamanho_palavra) {
    int maiores_p = 0;
    int maior_qtd_pali = 0;

    for (int i = 0; i < tamanho_palavra; i++) {
        for (int j = i; j < tamanho_palavra; j++) {
            int contador = 0;
            for (int k = i; k <= j; k++) {
                if (posicoes_especiais[k]) contador++;
            }
            if (contador > maiores_p || (contador == maiores_p && dp[i][j] > maior_qtd_pali)) {
                maiores_p = contador;
                maior_qtd_pali = dp[i][j];
            }
        }
    }
    return maior_qtd_pali;
}

int main() {
    char palavrao[MAX + 1];
    int posicoes; 
    
    scanf("%s", palavrao);
    int tamanho_palavra = strlen(palavrao);

    scanf("%d", &posicoes);
    memset(posicoes_especiais, 0, sizeof(posicoes_especiais));

    for (int i = 0; i < posicoes; i++) {
        int p;
        scanf("%d", &p);
        if (p >= 1 && p <= tamanho_palavra) {
            posicoes_especiais[p - 1] = 1;
        }
    }

    programacao_dinamica(palavrao, tamanho_palavra);
    printf("%d\n", maior_subsequencia(tamanho_palavra));

    return 0;
}