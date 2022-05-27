#include <stdio.h>

int main()
{
    float subject1, subject2, subject3, subject4, subject5, sum, average;


    printf("Enter five grades that are equivalent to five subjects :\n");
    scanf("%f%f%f%f%f", &subject1, &subject2, &subject3, &subject4, &subject5);

    sum = subject1 + subject2 + subject3 + subject4 + subject5;
    average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;
    printf("Average : %0.2f\n", average);
    return 0;
}
