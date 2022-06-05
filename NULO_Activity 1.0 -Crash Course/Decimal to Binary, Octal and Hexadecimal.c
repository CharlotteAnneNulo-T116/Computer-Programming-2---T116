#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convert(int, int);
int main()
{
      int num;
      printf("Enter Decimal Integer:\t");
      scanf("%d", &num);
                printf("\nBinary     :\t");
                convert(num, 2);
                printf("\n");
                printf("\nOctal      :\t");
                convert(num, 8);
                printf("\n");
                printf("\nHexadecimal:\t");
                convert(num, 16);
                printf("\n");
      return 0;
}

void convert(int num, int base)
{
      int remainder = num % base;
      if(num == 0)
          return;

      convert(num / base, base);
      if(remainder < 10)
            printf("%d", remainder);
      else
            printf("%c", remainder - 10 + 'A' );
}
