// couting characters
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    char maiorpalavra[50];
    int maiortam = 0;

    while (1){
        fgets(palavra, sizeof(palavra), stdin);
        if (strcmp(palavra, "0\n") == 0) {
            break;
        }

        int contaletras = 0;
        int primeirohifen = 1;

        for (int i =0; palavra[i] != '\0'; i++){
            if (palavra[i] == ' ' || palavra[i] == '\0'){
                if(contaletras >0){
                    if(!primeirohifen){
                        printf("-");
                    }
                    printf("%d", contaletras);
                    contaletras = 0;
                    primeirohifen = 0;
                }
    
            } else{
                contaletras++;
            }   
        }
        if(contaletras>0){
            if (!primeirohifen){
                printf("-");
            }
            printf("%d", contaletras);
        }
        printf("\n");
        int taminicio = strlen(palavra);
        if (taminicio > maiortam) {
            maiortam = taminicio;
            strcpy(maiorpalavra, palavra);
        }
    }
    if(maiortam > 0){
        printf("The biggest word: %s", maiorpalavra);
    }

    return 0;
}