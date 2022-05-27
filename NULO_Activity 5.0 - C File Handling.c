#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[200];
  char fname[50];
  char str1;

	printf(" Input the file location : ");
	scanf("%s",fname);

    fptr = fopen(fname, "a");
    if (fptr == NULL)
   {
      printf(" Error in opening file!");
      exit(1);
   }
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);

    printf(" The lines are : \n");
        for(i = 0; i < n+1;i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    fclose (fptr);

//----- Read the file after appended -------
	fptr = fopen (fname, "r");
	printf("\n Inside of the file %s   :\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
  return 0;
}
