#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL,"");
    char alunoNome[50]; 
    int continuar;
    float mediaAluno, presenca;
    float N1, N2;

    printf("\n[Aqui calcularemos a media de alunos para ver se estara aprovado ou reprovado com a condicao das presencas]\n");
        
    printf("\n[.] Qual o nome do aluno(a)?\n[R] ");
    scanf("%[^\n]s", &alunoNome);

    printf("\n[.] Qual  o percentual de presenças do Aluno(a)?\n[R] ", alunoNome);
    scanf("%f", &presenca);

    printf("\n[.] Nota final do primeiro bimestre?\n[R] ");
    scanf("%f", &N1);

    printf("\n[.] Nota final do segundo bimestre?\n[R] ");
    scanf("%f", &N2);

    printf("\n");

    mediaAluno = (N1 + N2) / 2; 

system("pause");

    printf("\n[Relatorio Final]\n");
        
    printf("\n[1] Nome: %s", alunoNome);
    printf("\n[2] Nota do Primeiro Simestre: %.2f", N1);
    printf("\n[3] Nota do Segundo Bimestre: %.2f:", N2);
    printf("\n[4] Media Final: %.2f", mediaAluno);
    printf("\n[5] Total de Presenças: %.2f", presenca);
  
    if (mediaAluno >= 60.00 && presenca < 75.00) {
        printf("\n[6] Aluno reprovado por frequência :[\n\n");
        
    } else if (mediaAluno < 60.00 && presenca >= 75.00) {
        printf("\n[6] Aluno reprovado por nota :[\n\n");
        
    } else if (mediaAluno < 60.00 && presenca < 75.00) {
        printf("\n[6] Aluno reprovado por nota e frequência x[\n\n");

    } else {
        printf("\n[6] Aluno Aprovado :D\n\n", alunoNome);

    }
   
system("pause");
     
    return 0;
  
}
