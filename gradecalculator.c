#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputs(int *grades, int classSize)
{
    for (int i = 0; i < classSize; i++)
    {
        printf("\nInsira a nota do %dº aluno:\n", i + 1);
        scanf("%d", &grades[i]);

        if (grades[i] < 1 || grades[i] > 10)
        {
            printf("\nNota inválida. Insira apenas números de 1 a 10.\n");
            break;
        }
    }
}

void maxGrade(int *grades, int classSize)
{
    int currentMax = grades[0];

    for (int i = 0; i < classSize; i++)
    {
        if (grades[i] > currentMax)
        {
            currentMax = grades[i];
        }
    }
    printf("\nA maior nota é: %d\n", currentMax);
}

void minGrade(int *grades, int classSize)
{
    int currentMin = grades[0];

    for (int i = 0; i < classSize; i++)
    {
        if (grades[i] < currentMin)
        {
            currentMin = grades[i];
        }
    }
    printf("\nA menor nota é: %d\n", currentMin);
}

void classAverage(int *grades)
{
    
}

int main()
{
    int grades[10];
    int classSize = 10;
    inputs(grades, classSize);
    maxGrade(grades, classSize);
    minGrade(grades, classSize);

    return 0;
}