#include<stdio.h>

void main()
{
int n1,n2,n3,chances=5;
int a,b;
while(chances != 0)
{
srand(time(0));
a=rand() % 10;

srand(time(0)+1);
b=rand() % 10+1;

printf("How much is %d + %d:",a,b);
scanf("%d",&n1);

	if(n1 != (a+b))
	{
		chances--;
		printf("Try again....Chances left %d\nEnter answer 		again:",chances);
		scanf("%d",&n1);
	}else
	{	
	printf("You have cleared First Level !!\n");
	}	
	
	printf("\nWelcome to 2nd Level");
	srand(time(0));
	int a=rand() % 100;
	srand(time(0)+1);
	int b=rand() % 100+1;
	printf("\nHow much is %d + %d:",a,b);
	scanf("%d",&n2);
	if(n2 != (a+b))
	{
	chances--;
	printf("Try again....Chances left %d\nEnter answer again:",chances);
	scanf("%d",&n2);
	}else{	
	printf("You have cleared Second Level !!\n");
	}	
	
	printf("\nWelcome to 3rd Level");
	srand(time(0));
	int a1=rand() % 1000;
	srand(time(0)+1);
	int b1=rand() % 1000+1;
	printf("\nHow much is %d + %d:",a1,b1);
	scanf("%d",&n3);
	if(n3 != (a1+b1))
	{
	chances--;
	printf("Try again....Chances left %d\nEnter answer again:",chances);
	scanf("%d",&n3);
	}else{	
	printf("You have cleared Third Level !!\n");
	break;
}
}
	

}
