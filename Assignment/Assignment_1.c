#include <stdio.h>
main()
{
   int x,y,sum=0;
   printf("Input the Value of terms = ");
   
   scanf("%d",&y);
   
   printf("\nThe first %d natural numbers are=\n",y);
   
   for(x=1;x<=y;x++)
   {
       
     printf("%d ",x);
     
     sum += x;
     
   }
   
   printf("\nThe Sum of natural numbers of n(%d) terms = %d \n",y,sum);
   
   return 0;

}
