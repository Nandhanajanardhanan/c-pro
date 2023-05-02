#include<stdio.h>
int main()
 {
   int n,i,w,j;
   printf("Enter required number of lines : ");
   scanf("%d%d",&n,&w);
   for (i=0;i<n;i++)
   { for (j=1;j<=w;j++)
   {printf("*");}
   printf("\n");
   }
   return 0;
   }
