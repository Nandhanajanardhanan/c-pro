#include<stdio.h>
int main()
 {
   int n,x,i,s=0;
   float avg;
   printf("enter n");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
   scanf("%d",&x);
   s=s+x;
   }
   avg=(float)s/n;
   printf("average = %f",avg);
   return 0;
   }
