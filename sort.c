#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,t,j,n=5;
	int *p;
	int a[5]={2,3,1,5,4};
	for(int i=0;i<n;i++)
	{
	printf("\n%d ",a[i]);
	}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(*(p+j) > *(p+j+1))
		{
			t = *(p+j);
			*(p+j) = *(p+j+1);
			*(p+j+1) = t;
		}
	}			
}
for(i=0;i<n;i++);
{
printf("%d",*(p+i));
}
}

