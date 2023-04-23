#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g, result;
    printf("enter the values of a,b,c,d,e,f,g");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    result=((a-b/c*d+e)*(f+g));
    printf("result=%f",result);
    return 0;
}