#include <stdio.h>

int main(void) {

    int i , temp, count=0, sum=0, condition;
    float average, number;
    condition = 1;

    while(condition>0) {
        printf("[%d] Input Number: ", i+1);
        scanf("%d", &temp);
        if (temp<0){
            continue;
        }
        else{
            if (temp==0){
                break;
            }
            else{
                count++;
                sum+=temp;
                i++;
            }
        }
    }
    average=(float)sum/(float)count;
    printf(" Average= %f ", average);
}
