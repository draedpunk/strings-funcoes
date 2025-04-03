// Ceasar Cipher
#include <stdio.h>
#include <string.h>

int main() {
    int casos, pulos;
    char texto_original[51];
    scanf("%d", &casos); 

    for (int i = 0; i < casos; i++) {
        scanf("%s", texto_original); 
        scanf("%d", &pulos);

        if (pulos == 0) {//TOPCODER
            printf("%s\n", texto_original);
        } else {
            for (int j = 0; texto_original[j] != '\0'; j++) {
                texto_original[j] = ((texto_original[j] - 'A'-pulos +26) % 26) +'A';
            }

            printf("%s\n", texto_original);
        }
    }

    return 0;
}