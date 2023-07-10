/*
Maksim Petrushin.
Random File Array Generator.
07.10.2023
Creates a .txt file containing random positive unsorted integers separated by space
This can serve as an input to a sorting program
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    FILE *fptr1;

    fptr1 = fopen("output.txt", "w");

    if (fptr1 == NULL)
    {
        printf("Sorry can not find the file, FILE Error!");
        exit(1);
    }

    int x, arrSize, maxInt, rndNum;
    srand(time(NULL));
    printf("\nEnter size of array to generate: ");
    scanf("%d", &arrSize);
    printf("\nEnter maximum size of array items: ");
    scanf("%d", &maxInt);

    for (x = 0; x < arrSize; x++)
    {
        rndNum = rand() % maxInt + 1;
        fprintf(fptr1, "%d ", rndNum);
        
    }

    fclose(fptr1);
    return 0;
}
