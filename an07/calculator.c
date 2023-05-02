#include<stdio.h>
int main()
{
int a,b,op,r;
printf("Enter the first no : ");
scanf("%d",&a);
printf("Enter the Second no : ");
scanf("%d",&b);
printf("Select The Opretor - +=1,-=2,*=3,/=4");
scanf("%d",&op);
switch(op)
{
case 1 :r=a+b;
break;
case 2 :r=a-b;
break;
case 3 :r=a*b;
break;
case 4 :r=a/b;
break;
default : printf("Invalid Operation Found !");
}
printf("Answer = %d",r);
return 0;
}


