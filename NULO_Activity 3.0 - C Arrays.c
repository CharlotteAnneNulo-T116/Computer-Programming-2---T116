#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[10];
    int i, n, sum=0;

       printf("Enter size of the Array: ");
       scanf("%d",&n);

    if( n<5 || n>10 )
        {
            printf( "Error - Quitting\n" );
            exit( 0 );
        }
            for(i=0;i<n;i++)
            {
	            printf("Enter Element %d: ",i+1);
                scanf("%d", &array[i]);
            }
    for(i=0; i<n; i++)
        sum += array[i];
    printf("Sum of all array elements: %d\n\n", sum);

    return 0;
}
