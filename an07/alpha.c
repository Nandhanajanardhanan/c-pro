#include<stdio.h>
void main()
{ char a;
printf("Enter the letter you need to check : ");
scanf("%c",&a);
switch(a)
{ case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :printf("The Letter is Vowel ");
break;
default : printf("The Letter is Consonants ");
}
}
