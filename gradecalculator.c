#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputs()
{
    char firstGrade[10], secondGrade[10], thirdGrade[10], fourthGrade[10], fifthGrade[10];
    int gOne, gTwo, gThree, gFour, gFive;
    int size = 5;

    for (int i = 0; i <= size; i++)
    {
        switch (i)
        {
        case 1:
            printf("\nInsira a nota do primeiro aluno: ");
            scanf("%s", &firstGrade);
            gOne = atoi(firstGrade);
            break;
        case 2:
            printf("\nInsira a nota do segundo aluno: ");
            scanf("%s", &secondGrade);
            gTwo = atoi(secondGrade);
            break;
        case 3:
            printf("\nInsira a nota do terceiro aluno: ");
            scanf("%s", &thirdGrade);
            gThree = atoi(thirdGrade);
            break;
        case 4:
            printf("\nInsira a nota do quarto aluno: ");
            scanf("%s", &fourthGrade);
            gFour = atoi(fourthGrade);
            break;
        case 5:
            printf("\nInsira a nota do quinto aluno: ");
            scanf("%s", &fifthGrade);
            gFive = atoi(fifthGrade);
            break;

        default:
            break;
        }
    }

    printf("\n%d, %d, %d, %d, %d\n", gOne, gTwo, gThree, gFour, gFive);
}

int firstInput()
{
    char firstGrade[10];
    int gradeOne;

    do
    {
        printf("\nInsira a nota do primeiro aluno: ");
        scanf("%s", &firstGrade);
        gradeOne = atoi(firstGrade);

        if (gradeOne < 1 || gradeOne > 10)
        {
            printf("\nNota inválida. Insira apenas números de 1 a 10.\n");
        }

    } while (gradeOne < 1 || gradeOne > 10);

    return gradeOne;
}

int main()
{
    /*
    int gradeOne, gradeTwo, gradeThree, gradeFour, gradeFive;
    gradeOne = firstInput();
    gradeTwo = secInput();
    gradeThree = thirdInput();
    gradeFour = fourthInput();
    gradeFive = fifthInput();
    int Grades[5] = {gradeOne, gradeTwo, gradeThree, gradeFour, gradeFive};
    */
    inputs();

    return 0;
}