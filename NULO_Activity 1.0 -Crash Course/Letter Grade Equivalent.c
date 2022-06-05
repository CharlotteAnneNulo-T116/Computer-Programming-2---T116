#include<stdio.h>

int main()
{
    int range;
    printf("Enter grade: ");
    scanf("%d",&range);

    if(range<0 || range>100)
        printf("Wrong Entry");

    else if(range>=92 && range<=100)
        printf("Your letter grade is: A");
    else if(range>=84 && range<=91)
        printf("Your letter grade is: A-");
    else if(range>=76 && range<=83)
        printf("Your letter grade is: B");
    else if(range>=68 && range<=75)
        printf("Your letter grade is: B-");
    else if(range>=60 && range<=67)
        printf("Your letter grade is: C");
    else if(range>=50 && range<=59)
        printf("Your letter grade is: D");
    else
        printf("Your letter grade is: F");

    return 0;
}
