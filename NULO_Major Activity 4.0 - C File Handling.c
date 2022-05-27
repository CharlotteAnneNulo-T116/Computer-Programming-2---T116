#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char name[100];
    int grade1, grade2, grade3, id, num;
    int i, sum = 0, average = 0;

    char string[200];
    char fname[50];

    printf("Enter number of students: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {

    printf("Enter file name: ");
    scanf("%s", fname);
    fptr = fopen(fname, "w");
    fgets(string, sizeof string, stdin);
    fputs(string, fptr);

      printf("For student%d \nEnter name: ", i+1);
      fgets(name, sizeof name, stdin);

      printf("Enter Student ID number: ");
      scanf("%d", &id);

      printf("Enter Math Grade: ");
      scanf("%d", &grade1);

      printf("Enter Science Grade: ");
      scanf("%d", &grade2);

      printf("Enter English Grade: ");
      scanf("%d", &grade3);

      printf("Data written succesfully!\n");

      sum = grade1 + grade2 + grade3;
      average = (grade1 + grade2 + grade3) / 3;

    fprintf(fptr, "\nStudent Name: %s", name);
    fprintf(fptr, "\nStudent ID number: %d", id);
    fprintf(fptr, "\nMath Grade: %d", grade1);
    fprintf(fptr, "\nScience Grade: %d", grade2);
    fprintf(fptr, "\nEnglish Grade: %d", grade3);
    fprintf(fptr, "\nTotal Grade: %d", sum);
    fprintf(fptr, "\nGrade Average: %d", average);
  	}

   fclose(fptr);
   return 0;
}
