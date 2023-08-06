#include <stdio.h>

int main() {

    int matricula;
    char turma;
    float nota;

    printf("Entre com a matricula, turma e nota de um estudante: \n");
    scanf("%d", &matricula);
    scanf(" %c", &turma);
    scanf("%f", &nota);


    printf("O estudante de matricula %d da turma %c tem nota %.1f", matricula, turma, nota);

    return 0;
}

