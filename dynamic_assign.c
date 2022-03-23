#include<stdio.h>
#include<stdlib.h>

void main()
{
int *fp,n,m,sum=0;
printf("Enter number of employees for registration :\n");
scanf("%d",&n);
fp=(int *)calloc(n,sizeof(int));
printf("Enter age of Employees:\n");
for(int i=0;i<n;i++)
{
scanf("%d",fp+i);
}

printf("How many more employees data about age you want to add?\n");
scanf("%d",&m);
if(m!=0)
{
	fp=(int *)realloc(fp,sizeof(int)*(n+m));
	printf("Enter NEW numbers\n");
	for(int i=n;i<n+m;i++)
	{	
		scanf("%d",fp+i);
	}

}
for(int i=0;i<n+m;i++)
{
printf("Ages of Employees are:%d\n",*(fp+i));
}
free(fp);
}
