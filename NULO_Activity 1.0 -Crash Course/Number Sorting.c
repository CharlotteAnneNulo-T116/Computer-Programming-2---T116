#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int number[10];
    int i, j, a, n;
        for (i = 0; i < 10; ++i)
        {
          int temp;
          printf("[%d] Input number: ",i+1);
          scanf("%d", &temp);
        if(temp>0){
            number[i] = temp;
        }else{
        printf("This Is Invalid Input. Try Again. \n");
        --i;
        continue;
            }
        }
        for (i = 0; i < 10; ++i)
        {
            for (j = i + 1; j < 10; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("Sorted list: ");
        for(i = 0;i<10;i++){
        if(i==10-1){
            printf("%d",number[i]);
        }
        else{
        printf("%d, ",number[i]);
        }
    }
    printf("\n");
}
