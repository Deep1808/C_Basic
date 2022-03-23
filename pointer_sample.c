#include<stdio.h>

void main()
{
int a=10,*p,**q;
p=&a;
q=&p;
printf("Value of a %d %d %d",a,*p,**q);
printf("\nAddress of a is %p and address of p is %p",p,q);
}
