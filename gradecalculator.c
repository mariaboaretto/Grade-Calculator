#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputs(int *grades, int classSize)
{
    for (int i = 0; i < classSize; i++)
    {

        do
        {
            printf("\nInsira a nota do %dº aluno:\n", i + 1);
            scanf("%d", &grades[i]);

            if (grades[i] < 1 || grades[i] > 10)
            {
                printf("\nNota inválida. Insira apenas números de 1 a 10.\n");
            }
        } while (grades[i] < 1 || grades[i] > 10);
    }
}

void classStatistics(int *grades, int classSize)
{
    int currentMax = grades[0];
    int currentMin = grades[0];
    int sum = 0;

    for (int i = 0; i < classSize; i++)
    {
        if (grades[i] > currentMax)
        {
            currentMax = grades[i];
        }
        if (grades[i] < currentMin)
        {
            currentMin = grades[i];
        }
        sum = sum + grades[i];
    }
    printf("\nA maior nota é: %d\n", currentMax);
    printf("\nA menor nota é: %d\n", currentMin);
    printf("\nA média das notas é: %d\n", sum / classSize);
}

int main()
{
    int grades[5];
    int classSize = 5;
    inputs(grades, classSize);
    classStatistics(grades, classSize);

    return 0;
}