// Fit or dont fit
#include <stdio.h>
#include <string.h>

void verificar_encaixe(char n1[], char n2[]){
    int comp_a, comp_b;
    comp_a = strlen(n1);
    comp_b = strlen(n2);

    if (comp_b > comp_a){
        printf("nao encaixa\n");
    } else {
        int encaixa = 1;

        for (int p = 0; p < comp_b; p++){
            if (n1[p + (comp_a - comp_b)] != n2[p]){
                encaixa =0;
                break;
            }
        }

        if(encaixa){
            printf("encaixa\n");

        } else{
            printf("nao encaixa\n");
        }
    }
}

int main(){
    char a[1020], b[1020];
    // int comp_a, comp_b;
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){
        scanf("%s %s", a, b);
        // comp_a = strlen(a);
        // comp_b = strlen(b);

        // if (comp_b > comp_a){
        //     printf("nao encaixa\n");
        // } else {
        //     int encaixa = 1;

        //     for (int p = 0; p < comp_b; p++){
        //         if (a[p + (comp_a - comp_b)] != b[p]){
        //             encaixa =0;
        //             break;
        //         }
        //     }
        //     if(encaixa){
        //         printf("encaixa\n");
        //     } else{
        //         printf("nao encaixa\n");
        //     }
        // }
        verificar_encaixe(a, b);
    }

    return 0;
}