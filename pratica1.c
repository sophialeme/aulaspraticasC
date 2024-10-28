#include<stdio.h>

struct aluno{
 float nota1;
 float nota2;
 float nota3;
 float media;
};

float mediaAluno(float nota1, float nota2, float nota3){
    float media;
    media = (nota1 + nota2 + nota3)/3;
    return media;
}

int main(){
    struct aluno aluno1, aluno2, aluno3;
    aluno1.nota1 = 10;
    aluno1.nota2 = 9;
    aluno1.nota3 = 8;
    aluno1.media = mediaAluno(aluno1.nota1,aluno1.nota2,aluno1.nota3);

    aluno2.nota1 = 7;
    aluno2.nota2 = 6;
    aluno2.nota3 = 5;
    aluno2.media = mediaAluno(aluno2.nota1,aluno2.nota2,aluno2.nota3);

    aluno3.nota1 = 4;
    aluno3.nota2 = 3;
    aluno3.nota3 = 2;
    aluno3.media = mediaAluno(aluno3.nota1,aluno3.nota2,aluno3.nota3);

    printf("----------------------------\n");
    printf("nota 1: %f\n", aluno1.nota1);
    printf("nota 2: %f\n", aluno1.nota2);
    printf("nota 3: %f\n", aluno1.nota3);
    printf("media: %f\n", aluno1.media);
    printf("situação: %s\n", aluno1.media>=7.0?"aprovado":"reprovado");
    printf("----------------------------\n");
    printf("nota 1: %f\n", aluno2.nota1);
    printf("nota 2: %f\n", aluno2.nota2);
    printf("nota 3: %f\n", aluno2.nota3);
    printf("media: %f\n", aluno2.media);
    printf("situação: %s\n", aluno2.media>=7.0?"aprovado":"reprovado");
    printf("----------------------------\n");
    printf("nota 1: %f\n", aluno3.nota1);
    printf("nota 2: %f\n", aluno3.nota2);
    printf("nota 3: %f\n", aluno3.nota3);
    printf("media: %f\n", aluno3.media);
    printf("situação: %s\n", aluno3.media>=7.0?"aprovado":"reprovado");
    printf("----------------------------\n");
    return 0;
}