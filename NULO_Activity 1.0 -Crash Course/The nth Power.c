#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, result;

    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

  if (x != 0)
    {
        if (y > 0)
        {
            result = x;
            for (int i=1; i<y; i++)
            {
                result *= x;
            }
        }
        else if (y < 0)
        {
            result = x;
            for (int i =1; i<abs(y); i++)
            {
                result *= x;
            }
            printf("%d ^ %d = 1/%d", x, y, result);
            return 0;
        }
        else{
            result = 1;
        }
    }
    else{
        printf("X should not be equal to 0!");
        return -1;
        }
    printf("%d ^ %d = %d", x, y, result);
    return 0;
}
