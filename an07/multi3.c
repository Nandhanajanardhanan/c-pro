#include<stdio.h>
int main()
{
int i=1;
label:
printf("%dx%d=%d",3,i,3*i);
printf("\n");
i=i+1;
if(i<=10)
{goto label;
}
}
