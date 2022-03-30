#include<stdio.h>

int inf(int crdtls [3][2], int ID, int PIN)
{
    int temp = 0;
    for(int i = 0; i<3; i++){
        if(ID == crdtls[i][0] && PIN == crdtls[i][1]){
            temp = 1;
        }
    }
    return temp;
}

int main ()
{
    int crdtls[3][2] = {{132,546}, {765,891}, {234,567}};
    int ID, PIN;

    printf("Enter ID Number: \n");
    scanf("%d", &ID);

    printf("Enter PIN: \n");
    scanf("%d", &PIN);

    if(inf(crdtls,ID,PIN))
    {
        printf("You have successfully logged in!'");
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
