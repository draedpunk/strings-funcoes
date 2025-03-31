// Fit or dont fit
#include <stdio.h>
#include <string.h>

int main(){
    char a[1020], b[1020];
    int casos;
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
        scanf("%s %s", a, b);

        int comp_a, comp_b;
        comp_a = strlen(a);
        comp_b = strlen(b);

        if (comp_b > comp_a){
            printf("nao encaixa\n");
        } else {
            for (int p = 0; p < comp_b; p++){
                if (a[p + (comp_a - comp_b)] != b[p]){
                    printf("encaixa\n");
                    break;
                }
            }
        }
    }



    return 0;
}