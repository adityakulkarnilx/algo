#include<stdio.h>

int main()
{
   int a,b,sum,number;

   // Initialize
   sum = 0;
   add = 0;
   // new version
   //// new branch
 
   // Print first 6 numbers of the fibonacci series
   for( number=0; number< 6; number++ )
   {
      if( number==0 )
      {
         printf("\n0");
      }
      else if (number==1)
      {
         printf("\t1");
         a=0;
         b=1;
      }
      else
      {
         sum = a+b;
         printf("\t%d",sum);
         a=b;
         b= sum;
      }
   }
   printf("\n");
   return 0;
}
