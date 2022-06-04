#include <stdio.h>

main()
{
    int x,y,sum=0;
    float avg;
    
    printf("Enter 10 numbers");
    
    for(x=1;x<=10;x++)
    {
        printf("\n Number %d=", x);
        scanf("%d", &y);
        
        sum += y;
    
    }
    
    avg = sum/10.0;
    printf("The sum of the 10 number are = %d", sum);
    printf("\nThe average of the 10 numbers are = %2f", avg);
    
    return 0;
}
