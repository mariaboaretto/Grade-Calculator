#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputs()
{
    int grades[5];
    int classSize = 5;
    char *student[10] = {"1º", "2º", "3º", "4º", "5º"};

    for (int i = 0; i < classSize; i++)
    {
        printf("\nInsira a nota do %s aluno:\n", student[i]);
        scanf("%d", &grades[i]);
        printf("%d", grades[i]);
        if (grades[i] < 1 || grades[i] > 10)
        {
            printf("\nNota inválida. Insira apenas números de 1 a 10.\n");
            break;
        }
    }
}

int main()
{
    inputs();

    return 0;
}