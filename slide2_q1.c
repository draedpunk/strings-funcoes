// Defina uma função em que dado o nome de um aluno e suas 3
// notas, calcule a média e informe se ele foi aprovado (média >= 6.0)
// - Uma função calcular média deve ser definida
// - Um procedimento deve exibir o resultado
#include <stdio.h>
#include <string.h>

void situacao(char n[], double med){

    if (med >= 6.0){
        printf("O aluno %s esta APROVADO por media.", n);
    } else {
        printf("O aluno %s esta REPROVADO por media.", n);
    }
}

double calcular_media(double n1, double n2, double n3){
    double media;
    media = (n1 + n2 + n3)/3;

    return media;
}

int main(){
    char nome[25];
    printf("Informe o nome do aluno: ");
    scanf("%s", nome);

    double nota_um, nota_dois, nota_tres;
    scanf("%lf %lf %lf", &nota_um, &nota_dois, &nota_tres);
    double m = calcular_media(nota_um, nota_dois, nota_tres);

    situacao(nome, m);


    return 0;
}