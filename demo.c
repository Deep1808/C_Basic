#include<stdio.h>

//extern void addition(int a,int b);
void multi(int a,int b);
void main()
{
extern int p;
int x=2;
int y=3;
printf("Value of P is %d\n",p);

//addition(x,y);
multi(x,y);
}

void multi(int a,int b)
{
printf("Multiplication :%d\n",a*b);
}
