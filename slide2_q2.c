// Defina uma função que calcula e retorna o fatorial de um número
#include <stdio.h>

long long int calcular_fatorial(int n){
    int fatorial = 1;
    if (n == 0 || n == 1){
        fatorial = 1;
    } else{
        for (int i = 1; i <= n; i++){
            fatorial *= i;
        }
        printf("O fatorial eh igual a: %d\n", fatorial);
    }  
    
    return fatorial;
}

int main(){
    int numero;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    calcular_fatorial(numero);

    return 0;
}