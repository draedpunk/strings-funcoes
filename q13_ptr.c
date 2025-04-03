// bacteria I
#include <stdio.h>
#include <string.h>

void avaliar_resistencia(char dna[], char cod[]){
        if (strstr(dna, cod)){
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        } 
}
 
int main() {
    char dna_bacteria[101];
    char resistencia[101];
   
    while(scanf("%s %s", dna_bacteria, resistencia) != EOF){
        avaliar_resistencia(dna_bacteria, resistencia);
    }
    

    return 0;
}