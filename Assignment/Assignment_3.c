/*Write a program in C to display the n terms of odd natural number and their sum*/
#include <stdio.h>

main()
{
   int x,y,sum=0;

   printf("Input number of term of natural odd numbers : ");
   
   scanf("%d",&y);
   
   printf("\nThe odd numbers are :");
   
   for(x=1;x<=y;x++)
   {
       
     printf("%d ",2*x-1);
     
     sum+=2*x-1;
   }
   
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", y,sum);
}
