#include <stdio.h>

int main()
{
    int arr[10];
    int i, max, min, size;
    for(i=0; i<10; i++)
    {
    int temp;
    printf("[%d] Input a Number: ", i+1);
    scanf("%d", &temp);
    if(temp>0){
            arr[i] = temp;
        }else{
        printf("This is an Invalid Input. Try Again! \n");
        --i;
        continue;
        }
    }
    min = arr[0];
    max = arr[0];

    for(i=1; i<10; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum Number: %d\n", min);
    printf("Maxinum Number: %d", max);

    return 0;
}
